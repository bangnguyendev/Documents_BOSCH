#!/bin/bash

####################
# ham read & printf mcdc
PRINT_MCDC_SUMMARY() {
	Project=`cat $data_summary | grep -i "Project: " | cut -d '>' -f3 | cut -d '<' -f1`
	echo -e "Project: \e[92m$Project \e[0m"
	Result=`cat $data_summary | grep -i "Overall Result: " | cut -d '>' -f3 | cut -d '<' -f1`
	#check sumary
	if [ $Result == Pass ] 
	then
		echo -e "Result Summary	: \e[30;48;5;82m === Pass === \e[0m"
	else
		echo -e "Result Summary	: \e[30;48;5;9m === Fail === \e[0m"
	fi
	#check test_report.html
	if [ -f $test_report ]
	then
		echo -e "test_report 	: \e[30;48;5;82m  Yes  \e[0m"
	else
		echo -e "test_report 	: \e[30;48;5;9m  None  \e[0m"
	fi
	echo ================================
	c0=`cat $data_summary | grep -i -A 3 "Statement (S)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
	c1=`cat $data_summary | grep -i -A 3 "Decision (D)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
	mcdc=`cat $data_summary | grep -i -A 3 "MC/DC - unique cause (U)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
	
	echo "C0   (Summary)	: $c0	"
	echo "C1   (Summary)	: $c1	"
	echo "MCDC (Summary)	: $mcdc	"
	
	
}
####################
link_current=`pwd` # save dir current
find . -type f -name "test_summary.html" > list_test_summary

rm -rf list_project fill_MCDC_excel

for link_summary in `cat list_test_summary`
do
	#echo ${link_summary%/*}
	cd ${link_summary%/*}
	
	data_summary=`find . -type f -name "test_summary.html"`
	PRINT_MCDC_SUMMARY

	#check test_report.html
	test_report=`find . -type f -name "test_summary.html"`

	rm -rf autotest_generation.txt
	cd $link_current # quay tro lai thu muc ngoai cung	
	# echo $Project >> list_project # tao file nay de check AR WalkThougth COEM
	# echo "$c0	$c1	$mcdc" >> fill_MCDC_excel
done

#check delete py sh
find ./ -type f -name '*.sh' -o -name '*.py' | egrep -v "read_MCDC.sh|auto_zip.sh" > list_clear_scrip

for clear_file in `cat list_clear_scrip`
do
	rm -rf $clear_file
	echo ...rm $clear_file
done

rm -rf list_test_summary list_clear_scrip
read -n 1 -r -s -p $'Press enter to exit...\n'


	