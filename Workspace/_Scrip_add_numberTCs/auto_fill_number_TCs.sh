#!bin/bash
read -p "vui long nhap n(number)/t(test_): " var_type
read -p "vui long nhap name_file: " name_file
rm -rf log_change.txt
touch log_change.txt
temp_count=1

if [ $var_type == "n" ]
then
	echo Chon kieu number >> log_change.txt
	echo Chon kieu number
	# temp_out1 export nhung chuoi can thay doi #at_line_code
	grep 'START TEST: "[0-9]' $name_file.c| cut -d ' ' -f3 > temp_out1
	# them -n la lay #at_line_code can thay doi
	grep -n 'START TEST: "[0-9]' $name_file.c| cut -d ':' -f1 > temp_out2
elif [ $var_type == "t" ]
then
	echo Chon kieu test_ >> log_change.txt
	echo Chon kieu test_ 
	grep 'START TEST: ".*\_' $name_file.c| cut -d ' ' -f3 > temp_out1
	# them -n la lay #at_line_code can thay doi
	grep -n 'START TEST: ".*\_' $name_file.c| cut -d ':' -f1 > temp_out2
fi

for i in `cat temp_out2`
do
	if [ $var_type == "n" ]
	then
		temp_awk=`awk "{if(NR==$temp_count){print $1;}}" temp_out1`
		
		string_can_thay=`printf 'START TEST: %s' $temp_awk`
	
	elif [ $var_type == "t" ]
	then
		string_can_thay=`printf 'START TEST: "test_'`

	fi
	
	string_da_thay=`printf 'START TEST: "%s: ' $temp_count`
	echo $string_can_thay >> log_change.txt
	echo "===========> $string_da_thay" >> log_change.txt
	echo $string_can_thay 
	echo "===========> $string_da_thay"
	#sed -i "$i s/$string_can_thay/$string_da_thay/" $name_file.c
	((temp_count++))
done 
rm -rf temp_out1
rm -rf temp_out2
read -p "Close sau 3s... Xem lai o log_change.txt" -t 3


