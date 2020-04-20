#!bin/bash


count=`grep -i '"test_' atest_zxc.c -c`
temp_count=1

for i in `grep -i '"test_' atest_zxc.c`
do
	if [$temp_count != $count]
	then
		echo $i | sed "s/test_/$temp_count: /"
		temp_count=$[temp_count+1]
		echo $temp_count
		echo ==========
	else
	
		echo done
	fi

	#echo $temp_count
	#echo $i | sed "s/test_/$temp_count: /"
	#temp_count=$[temp_count+1]
	
done
