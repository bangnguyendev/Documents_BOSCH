# !/bin/sh
# tim file  .ctr
find . -type f -name '*.ctr' > temp_link
count=0;
# check xem tim thay bao nhieu file ctr?
for i in `cat temp_link`
do
	((count++))
done
# neu khong tim thay file ctr nao thi thoat luon
if [ $count == 0 ] 
then
	echo Khong tim thay .ctr
	exit 
# neu tìm thay 1 file ctr thi run luon
elif [ $count == 1 ] 
then
	echo Runing.......
	link=`cat temp_link`
# neu tim thay nhieu file ctr thi question chay file nao?
else 
	echo Thu muc chua nhieu file .ctr
	for link in `cat temp_link` # neu co nhieu hon 1 ten func giong nhau thi no se dc liet ke ra
	do
		if [ -f $link ]
		then
			echo -e "Result: \e[92m$link \e[0m"
			read -p "Chon file nay ? (Y/N) " var_choose_ctr
			if [ $var_choose_ctr == y ] || [ $var_choose_ctr == Y ]
			then
				echo -e "\e[92mChon: $link \e[0m"
				break
			else
				echo == Skip ==
			fi		
		else
			echo -e "Result: \e[30;48;5;9mFail \e[0m"
		fi
	done
	rm -rf temp_link
	
fi


substring_link=${link%/*} # cat ten func de lay ten folder

echo -e "Folder: \e[92m$substring_link \e[0m"
echo =============
# di chuyen den thu muc chua .ctr
cd $substring_link
# tim file  .ctr
file=$(find . -type f -name '*.ctr')
# tim file  .c
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

rm -rf line_TCs
touch line_TCs
#tim vi tri line ket thuc cua TestCase
cat $file |grep -n 'End Test:'| grep -v 'End Test: COVERAGE RULE SET'|cut -d ':' -f1 >> line_TCs
# add them define true false
sed -i "15i\ 	#define True (!False) " $file_c	
sed -i "15i\ 	#define False 0 " $file_c	
sed -i "15i\/*      Author: $(uname -n)      */ " $file_c	
# khoi tao line test trong .ctr là vi tri line 7
temp_line=7
for line_end_TCs in $(cat line_TCs)
do
# $i la vi tri ket thuc cua TCs dang check
	cat $file| sed -n "$((temp_line+5))p" | cut -d '-' -f26 # print name TCs
	cat $file| sed -n "$temp_line,$line_end_TCs p" > File_TCs_$line_end_TCs # lay noi dung TCs de tim FAILED
	count_failed_check=`cat File_TCs_$line_end_TCs | grep -v '>>  FAILED: No match for ' | grep -v '>>  FAILED: Incomplete expected call sequence' |grep '>>  FAILED:' -c`
	# KIEM TRA XEM TCs NAY CO FAILED HAY KHONG?
	if [ $count_failed_check == 0 ]
	then
		echo --- TESTCASE PASSED ---
	else
		echo --- TESTCASE FAILED ---
		# ham insert expected tu ctr qua file .c 
		INSERT_EXPECTED_CTR2C() {
			edit_expected=`cat $file| sed -n "$((temp_line+5))p" | cut -d '-' -f26 | sed 's/ Start Test: //g'`
			patter=`cat $file_c | grep -n "$edit_expected"` 
			number_patter=`echo $patter| cut -d ':' -f1`
			((number_patter--))
		}
		
		INSERT_EXPECTED_CTR2C
		sed -i "$number_patter i\    /*      Author: $(uname -n)      */ " $file_c	

# kiem tra xem trong TCs nay co Check Variable hay khong?
		if [ `cat $file| sed -n "$temp_line,$line_end_TCs p" |grep -v ">>  FAILED: Check: ACCESS_VARIABLE"| grep -A 2 '>>  FAILED: Check:' -c` -ge 1 ]
		then
		
			echo ====================== Check Variable ===========================
			echo " "	
			array_expected=(`cat $file| sed -n "$temp_line,$line_end_TCs p" |grep -v ">>  FAILED: Check: ACCESS_VARIABLE"| grep -A 2 '>>  FAILED: Check:'| grep 'expected_'| sed 's/expected_/\/expected_/g'|cut -d '/' -f2`)

			cat $file| sed -n "$temp_line,$line_end_TCs p" |grep -v ">>  FAILED: Check: ACCESS_VARIABLE"| grep -A 2 '>>  FAILED: Check:' | grep '           actual: ' > temp_actual
			cout_array=0

			cat temp_actual | while read line; do
				array_actual=($line)
				
				echo "${array_expected[cout_array]} = ${array_actual[1]} ;"
				var_expected_file_c=`echo "${array_expected[cout_array]} = ${array_actual[1]} ;"`
				
				INSERT_EXPECTED_CTR2C

				sed -i "$number_patter i\    $var_expected_file_c " $file_c

				((cout_array++))

			done
			
			rm -rf temp_actual
			echo " "
		fi

# kiem tra xem trong TCs nay co ACCESS_VARIABLE hay khong?
		if [ `cat $file| sed -n "$temp_line,$line_end_TCs p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE' -c` -ge 1 ]
		then
				
			echo ==================== Check: ACCESS_VARIABLE =====================
			echo " "
			
			var_access=`cat $file| sed -n "$temp_line,$line_end_TCs p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep -A 1 "ACCESS_EXPECTED_VARIABLE(" | sed "s/.*= ACCESS_EXPECTED_VARIABLE(/ACCESS_EXPECTED_VARIABLE(/g"`

			cat $file| sed -n "$temp_line,$line_end_TCs p" | grep -A 4 '>>  FAILED: Check: ACCESS_VARIABLE'| grep '           actual: ' > temp_actual
			cout_array=0
			cat temp_actual | while read line; do
				array_actual=($line)

				var_ACCESS_VARIABLE=`echo $var_access | sed 's/ -- //g'| cut -d ')' -f$((cout_array + 1))`
				echo "$var_ACCESS_VARIABLE) = ${array_actual[1]} ;"
				var_expected_file_c=`echo "$var_ACCESS_VARIABLE) = ${array_actual[1]} ;"`

				INSERT_EXPECTED_CTR2C

				sed -i "$number_patter i\    $var_expected_file_c " $file_c
				
				((cout_array++))
			done
			rm -rf temp_actual			
			echo " "
		fi


		echo ========================= The End. ==============================	
		echo " "

	fi
	
	temp_line=$((line_end_TCs+5))
	rm -rf File_TCs_$line_end_TCs
done
rm -rf line_TCs temp_memory

exit
# kiem tra xem trong TCs nay co >>  FAILED: Check Memory: hay khong?
if [ `cat $file| sed -n "$temp_line,$line_end_TCs p" | grep '>>  FAILED: Check Memory:' -c` -ge 1 ]
then

	echo ======================== Check Memory ===========================
	echo " "
	
	array_expected=(`cat $file| sed -n "$temp_line,$line_end_TCs p" | grep '>>  FAILED: Check Memory:'| cut -d ':' -f3| cut -d ' ' -f2`)
	
	cout_array=0
	while [  $cout_array -lt ${#array_expected[*]} ]
	do			
		cat $file| sed -n "$temp_line,$line_end_TCs p" | grep -A 3 '>>  FAILED: Check Memory:'| grep '  actual: '| cut -d ':' -f2 > temp_memory			
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

