#!/bin/sh
file_c=$(find . -type f -name "*.c")
# kiem tra xem co file bachkup chua
if [ -f file_c_bk ]
then
	 echo Nap tu file Backup
	 cat file_c_bk > "$file_c"
else 
	echo Tao file Backup
	cat "$file_c" > file_c_bk
fi

file=$(find . -type f -name '*.ctr')
rm -rf line_TCs
touch line_TCs

cat $file |grep -n 'End Test:'| grep -v 'End Test: COVERAGE RULE SET'|cut -d ':' -f1 >> line_TCs
temp_line=7
for i in $(cat line_TCs)
do
	cat $file| sed -n "$((temp_line+1))p" | cut -d '-' -f26 # print name TCs
	cat $file| sed -n "$temp_line,$i p" > File_TCs_$i # lay noi dung TCs de tim FAILED
	count_failed_check=`cat File_TCs_$i | grep -v '>>  FAILED: No match for ' | grep -v '>>  FAILED: Incomplete expected call sequence' |grep '>>  FAILED:' -c`
	# KIEM TRA XEM TCs NAY CO FAILED HAY KHONG?
	if [ $count_failed_check == 0 ]
	then
		echo --- TESTCASE PASSED ---
	else
		echo --- TESTCASE FAILED ---
		# ham insert expected tu ctr qua file .c 
		INSERT_EXPECTED_CTR2C() {
			edit_expected=`cat $file| sed -n "$((temp_line+1))p" | cut -d '-' -f26 | sed 's/ Start Test: //g'`
			patter=`cat $file_c | grep -n "$edit_expected"` 
			number_patter=`echo $patter| cut -d ':' -f1`
			((number_patter--))
		}
		
		INSERT_EXPECTED_CTR2C
		sed -i "$number_patter i\    /*      Author: $(uname -n)      */ " $file_c	

		# kiem tra xem trong TCs nay co >>  FAILED: Check: ACCESS_VARIABLE hay khong?
		if [ `cat $file| sed -n "$temp_line,$i p" |grep -v ">>  FAILED: Check: ACCESS_VARIABLE"| grep -A 2 '>>  FAILED: Check:' -c` -ge 1 ]
		then
		
			echo ====================== Check Variable ===========================
			echo " "	
			array_expected=(`cat $file| sed -n "$temp_line,$i p" | grep -A 2 '>>  FAILED: Check:'| grep 'expected_'| sed 's/expected_/\/expected_/g'|cut -d '/' -f2`)

			cat $file| sed -n "$temp_line,$i p" | grep -A 2 '>>  FAILED: Check:' | grep '           actual: ' > temp_actual

			cat temp_actual | while read line; do
				array_actual_temp=($line)
				array_actual+=(${array_actual_temp[1]})
				echo ${array_actual[@]} > temp_actual_1

			done
			array_actual=(`cat temp_actual_1`)

			# CHECK SO PHAN TU 2 MANG GIONG NHAU VA SO PHAN TU PHAI LON HON 0 
			if [[ ${#array_expected[*]} -eq ${#array_actual[*]} ]] && [[ ${#array_expected[*]} -ge 0 ]]
			then
				cout_array=0
				while [[  $cout_array -lt ${#array_expected[*]} ]]
				do			
					echo "${array_expected[cout_array]} = ${array_actual[cout_array]} ;"
					var_expected_file_c=`echo "${array_expected[cout_array]} = ${array_actual[cout_array]} ;"`
					
					INSERT_EXPECTED_CTR2C

					sed -i "$number_patter i\    $var_expected_file_c " $file_c

					((cout_array++))
				done
				array_actual=("")
				rm -rf temp_actual temp_actual_1
				echo " "
			else			
				echo So phan tu mang khong dung.
			fi	
		fi

		# kiem tra xem trong TCs nay co >>  FAILED: Check: ACCESS_VARIABLE hay khong?
		if [ `cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE' -c` -ge 1 ]
		then
				
			echo ==================== Check: ACCESS_VARIABLE =====================
			echo " "
			
			var_access=`cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep -A 1 "ACCESS_EXPECTED_VARIABLE(" | sed "s/.*= ACCESS_EXPECTED_VARIABLE(/ACCESS_EXPECTED_VARIABLE(/g"`
			
			array_actual=(`cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep '           actual: ' |sed "s/[a-v y-z A-Z :'<>]//g"`)
			
			cout_array=0
			for dem_temp in `cat $file| sed -n "$temp_line,$i p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep '           actual: ' |sed "s/[a-v y-z A-Z :'<>]//g"`
			do
				var_ACCESS_VARIABLE=`echo $var_access | sed 's/ -- //g'| cut -d ')' -f$((cout_array + 1))`
				echo "$var_ACCESS_VARIABLE) = ${array_actual[cout_array]} ;"
				var_expected_file_c=`echo "$var_ACCESS_VARIABLE) = ${array_actual[cout_array]} ;"`
					
				INSERT_EXPECTED_CTR2C

				sed -i "$number_patter i\    $var_expected_file_c " $file_c
				
				((cout_array++))
			done
						
			echo " "
		
		fi

		# kiem tra xem trong TCs nay co >>  FAILED: Check Memory: hay khong?
		if [ `cat $file| sed -n "$temp_line,$i p" | grep '>>  FAILED: Check Memory:' -c` -ge 1 ]
		then
		
			echo ======================== Check Memory ===========================
			echo " "
			
			array_expected=(`cat $file| sed -n "$temp_line,$i p" | grep '>>  FAILED: Check Memory:'| cut -d ':' -f3| cut -d ' ' -f2`)
			
			cout_array=0
			while [  $cout_array -lt ${#array_expected[*]} ]
			do			
				cat $file| sed -n "$temp_line,$i p" | grep -A 3 '>>  FAILED: Check Memory:'| grep '  actual: '| cut -d ':' -f2 > temp_memory			
				var_memory=`awk "{if( NR == $((cout_array+1)) ) {print $1;}}" temp_memory ` 
				var_memory=`echo $var_memory | sed "s/[ ]\{1,\}[U]\{1,\}\|[ ]\{2,\}[\.U\.]\{1,\}//g"`
				var_memory=`echo $var_memory | sed "s/\.[a-zA-Z]//g"`
				var_memory=`echo $var_memory | sed "s/[\.a-zA-Z_\.]\{3,\}//g"`
				var_memory=`echo $var_memory | sed "s/\.//g" | sed 's/ /_/g' | sed 's/_$//g'`
				echo "expected_${array_expected[cout_array]}[0] = $var_memory ;"
				var_expected_file_c=`echo "expected_${array_expected[cout_array]}[0] = $var_memory ;"`

				INSERT_EXPECTED_CTR2C

				sed -i "$number_patter i\    $var_expected_file_c " $file_c
				
				((cout_array++))			
			done
			echo " "					
		fi 
		echo ========================= The End. ==============================	
		echo " "

	fi
	
	temp_line=$((i+1))
	rm -rf File_TCs_$i
done
rm -rf line_TCs temp_memory



