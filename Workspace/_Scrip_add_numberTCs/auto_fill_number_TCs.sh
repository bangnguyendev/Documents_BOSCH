#!bin/bash
echo 'Search file .c'
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
rm -rf temp_link

substring_link=${link%/*} # cat ten func de lay ten folder

echo -e "Folder: \e[92m$substring_link \e[0m"
echo =============
# di chuyen den thu muc chua .ctr
cd $substring_link
# tim file  .ctr
file_ctr=$(find . -type f -name '*.ctr')



cat $file_ctr | egrep ".c([0-9]\{1,\}):|decn" > file_branch # lay noi dung TCs de tim FAILED

cat file_branch| awk '{print $1}' | cut -d ')' -f1 | cut -d '(' -f2 > file_line_condition
cat file_branch| awk '{print $4 , $5 , $6}' > file_condition

# tim file  .c
name_file=$(find . -type f -name "*.c")
# kiem tra xem co file bachkup chua
if [ -f file_c_bk_fill ]
then
	echo -e "\e[92m ===Nap tu file Backup=== \e[0m"
	cat file_c_bk_fill > "$name_file"
else 
	echo -e "\e[92m ===Tao file Backup=== \e[0m"
	cat "$name_file" > file_c_bk_fill
fi

name_file=`find . -type f -name "*.c"`

if [[ -f $name_file ]]
then
	echo Running....
	echo $name_file
else 
	read -p "Not found file .c" -t 3
	exit
fi

rm -rf log_change.txt
touch log_change.txt
temp_count=1

echo -e 'Search for the word \e[30;48;5;82m"START_TEST("test_"    \e[0m'
echo 'Search for the word "START_TEST("test_" ' >> log_change.txt
# Search for the word "START_TEST("test_" 
grep 'START_TEST("test_*' $name_file| cut -d '_' -f2 > temp_out1
# Search for [line numbers] containing the word "START_TEST("test_" 
# [cut -d ':' -f1] >> Filter the line numbers
grep -n 'START_TEST("test_*' $name_file| cut -d ':' -f1 > temp_out2

for i in `cat temp_out2`
do
	Str_Pattern=`printf 'START_TEST("test_'`
	Str_Replace=`printf 'START_TEST("%s: ' $temp_count`
	
	echo Line $i: $Str_Pattern >> log_change.txt
	echo "===========> $Str_Replace" >> log_change.txt
	echo Line $i: $Str_Pattern 
	echo "===========> $Str_Replace"
	sed -i "$i s/$Str_Pattern/$Str_Replace/" $name_file
	((temp_count++))
	
done 
echo ...
temp_count=1
echo -e 'Search for the word \e[30;48;5;82m"START_TEST("[0-9]\{1,\}:"  \e[0m'

echo 'Search for the word "START_TEST("[0-9]\{1,\}:" ' >> log_change.txt
grep 'START_TEST("[0-9]\{1,\}:' $name_file| cut -d ' ' -f5 > temp_out1
# Search for [line numbers] containing the word "START_TEST("[0-9]*:" 
# [cut -d ':' -f1] >> Filter the line numbers
grep -n 'START_TEST("[0-9]\{1,\}:' $name_file| cut -d ':' -f1 > temp_out2
temp_count_temp=1
for i in `cat temp_out2`
do

	temp_awk=`awk "{if(NR==$temp_count){print $1;}}" temp_out1`
	Str_Pattern=`printf '%s' $temp_awk`
	Str_Replace=`printf 'START_TEST("%s:' $temp_count`
	
	echo Line $i: $Str_Pattern >> log_change.txt
	echo "===========> $Str_Replace" >> log_change.txt
	echo Line $i: $Str_Pattern 
	echo "===========> $Str_Replace"
	sed -i "$i s/$Str_Pattern/$Str_Replace/" $name_file
	
	name_function=`cat $name_file| sed -n "$i p"| cut -d ':' -f2| cut -d '"' -f1`

	branch=`cat file_condition| sed -n "$((temp_count_temp))p"`

	numline=`cat file_line_condition| sed -n "$((temp_count_temp))p"`
	
	if [[ -z $branch ]] # neu k co data thi chay lai tu dau
	then
		temp_count_temp=1
		branch=`cat file_condition| sed -n "$((temp_count_temp))p"`
		numline=`cat file_line_condition| sed -n "$((temp_count_temp))p"`
		Str_Replace="coverage details: cover $branch for function $name_function at line $numline"
		echo $Str_Replace
	else
		Str_Replace="coverage details: cover $branch for function $name_function at line $numline"
		echo $Str_Replace
	fi
	((i++))
	sed -i "$i s/<Insert test case description here>/$Str_Replace/" $name_file
	((temp_count_temp++))
	((temp_count++))

done 
echo -e "\e[30;48;5;82m ===============Done============== \e[0m"
rm -rf file_branch file_condition file_line_condition temp_out1 temp_out2
read -n 1 -r -s -p $'Press enter to exit...\n'
#rm -rf temp_out1 temp_out2 $0

