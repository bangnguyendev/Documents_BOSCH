#!/bin/bash

find . -type f -name "test_summary.html" > list_test_summary
rm -rf list_project
cat list_test_summary | while read line; do

	echo $line
	
	Project=`cat $line | grep -i "Project: " | cut -d '>' -f3 | cut -d '<' -f1`
	cat $line | grep -i "Project: " | cut -d '>' -f3 | cut -d '<' -f1 >> list_project
	echo -e "Project: \e[92m$Project \e[0m"
	Result=`cat $line | grep -i "Overall Result: " | cut -d '>' -f3 | cut -d '<' -f1`
	if [ $Result == Pass ] 
	then
		echo -e "Result : \e[30;48;5;82m === Pass === \e[0m"
	else
		echo -e "Result : \e[30;48;5;9m === Fail === \e[0m"
	fi
	

	 
	c0=`cat $line | grep -i -A 3 "Statement (S)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '<' -f1`
	echo "C0     : $c0"
	c1=`cat $line | grep -i -A 3 "Decision (D)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '<' -f1`
	echo "C1     : $c1"
	mcdc=`cat $line | grep -i -A 3 "MC/DC - unique cause (U)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '<' -f1`
	echo "MCDC   : $mcdc"
	echo ================================

done

read -n 1 -r -s -p $'Press enter to exit...\n'
<<<<<<< HEAD
=======

exit

	FAILED=`cat $line | grep -i -A 3 '>FAILED<'| grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '<' -f1`

	if [ $FAILED > 0 ]
	then
		echo -e "FAILED : \e[30;48;5;9m === Fail === \e[0m"
	else
		echo -e "FAILED : \e[30;48;5;82m === Pass === \e[0m"
	fi
>>>>>>> f635df3e19ecb4b4bd36a8b2ab894bc2c4055e55
