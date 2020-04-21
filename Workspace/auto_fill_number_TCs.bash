#!bin/bash


count=`grep 'START TEST: ".*\_' atest_zxc.c -c`
temp_count=1
grep 'START TEST: ".*\_' atest_zxc.c| cut -d ' ' -f3 | cut -d '_' -f1 > temp_out1
#cat temp_out1

for i in `cat temp_out1`
do
	echo day la $i

done 


exit
for i in ``
do
	echo $i		
	if (( $temp_count <= $count))
	then
		echo $temp_count
		echo $i
		
		
		teamp_2='START TEST: "$temp_count:'

	  	echo $i | sed 's/$i/$teamp_2/g'
		((temp_count++))
		
		echo ==========
	fi	
	
	
done

