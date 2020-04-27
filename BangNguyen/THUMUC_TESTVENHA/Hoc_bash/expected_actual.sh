#!bin/bash

file=`find |grep '\.ctr$'`
rm -rf line_TCs| touch line_TCs
#cat $file |grep -n 'End Test:'| grep -v 'End Test: COVERAGE RULE SET'
cat $file |grep -n 'End Test:'| grep -v 'End Test: COVERAGE RULE SET'|cut -d ':' -f1 >> line_TCs
temp_line=7
for i in `cat line_TCs`
do
	cat $file| sed -n "$((temp_line+1))p" | cut -d '-' -f26
	cat -n $file| sed -n "$temp_line,$i p" > File_TCs_$i
	count_failed_check=`cat File_TCs_$i | grep '>>  FAILED:' -c`
	if [ $count_failed_check == 0 ]
	then
		echo --- TESTCASE PASSED ---
	else
		echo --- TESTCASE FAILED ---
		
		if [ `cat $file| sed -n "$temp_line,$i p" | grep -A 2 '>>  FAILED: Check:' -c` -ge 1 ]
		then
		
			echo ====================== Check Variable ===========================
			echo " "
			# fix failed >>  FAILED: Check: 		
			array_expected=(`cat $file| sed -n "$temp_line,$i p" | grep -A 2 '>>  FAILED: Check:'| grep 'expected_'| sed 's/expected_/\/expected_/g'|cut -d '/' -f2`)
			
			array_actual=(`cat $file| sed -n "$temp_line,$i p" | grep -A 2 '>>  FAILED: Check:'| grep '           actual: '| sed "s/[a-v y-z A-Z :'<>]//g"`)
		
			if [ ${#array_expected[*]} -eq ${#array_actual[*]} ] && [ ${#array_expected[*]} -ge 0 ]
			then
				cout_array=0
				while [  $cout_array -lt ${#array_expected[*]} ]
				do			
					echo "${array_expected[cout_array]} = ${array_actual[cout_array]} ;"
					((cout_array++))
				done
				
				echo "    sed >>> `cat $file| sed -n "$((temp_line+1))p" | cut -d '-' -f26`  "
				
			else
			
				echo So phan tu mang khong dung.
			fi

			echo " "		

		fi

		if [ `cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE' -c` -ge 1 ]
		then
				
			echo ==================== Check: ACCESS_VARIABLE =====================
			echo " "
			# fix failed >>  FAILED: Check: 
			
			array_expected=`cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep -A 1 "ACCESS_EXPECTED_VARIABLE(" | sed "s/.*= ACCESS_EXPECTED_VARIABLE(/ACCESS_EXPECTED_VARIABLE(/g"`
			
			array_actual=(`cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep '           actual: ' |sed "s/[a-v y-z A-Z :'<>]//g"`)
			
			cout_array=0
			for dem_temp in `cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep '           actual: ' |sed "s/[a-v y-z A-Z :'<>]//g"`
			do
				var_ACCESS_VARIABLE=`echo $array_expected | sed 's/ -- //g'| cut -d ')' -f$((cout_array + 1))`
				echo "$var_ACCESS_VARIABLE) = ${array_actual[cout_array]} ;"
				((cout_array++))
			done
			
			echo "    sed >>> `cat $file| sed -n "$((temp_line+1))p" | cut -d '-' -f26`  "
			echo " "
		
		fi


		if [ `cat $file| sed -n "$temp_line,$i p" | grep '>>  FAILED: Check Memory:' -c` -ge 1 ]
		then
		
			echo ======================== Check Memory ===========================
			echo " "
			
			array_expected=(`cat $file| sed -n "$temp_line,$i p" | grep '>>  FAILED: Check Memory:'| cut -d ':' -f3| cut -d ' ' -f2`)
			
			cout_array=0
			while [  $cout_array -lt ${#array_expected[*]} ]
			do			
				cat $file| sed -n "$temp_line,$i p" | grep -A 3 '>>  FAILED: Check Memory:'| grep '  actual: '| cut -d ':' -f2 > temp_memory			
				var_memory=`awk "{if( NR == $((cout_array+1)) ) {print $1;}}" temp_memory | sed "s/[ ]\{1,\}[U]\{1,\}\|[ ]\{2,\}[\.U]\{1,\}//g" | sed "s/[ ]\{2,\}//g" |sed 's/ /_/g' | sed "s/^_\|_$//g"`
				
				echo "expected_${array_expected[cout_array]}[0] = $var_memory ;"

				((cout_array++))			
			done
			echo "    sed >>> `cat $file| sed -n "$((temp_line+1))p" | cut -d '-' -f26`  "
			echo " "					
		fi 
		
		echo ========================= The End. ==============================	
	fi
	
	temp_line=$((i+1))
	rm -rf File_TCs_$i
done
rm -rf line_TCs temp_memory

exit

echo " "	
echo ============== Incomplete expected call sequence ================
echo " "
# fix failed >>  FAILED: Check: 
cat $file| sed -n "$temp_line,$i p" | grep '>>  FAILED: Incomplete expected call sequence' 

echo " "
echo ================== FAILED: No match for =========================
echo " "
# fix failed >>  FAILED: Check: 
cat $file| sed -n "$temp_line,$i p" | grep '>>  FAILED: No match for ' 

