#!/bin/bash

####################
# ham read & printf mcdc
READ_MCDC_SUMMARY() {
	Project=`cat $data_summary | grep -i "Project: " | cut -d '>' -f3 | cut -d '<' -f1`
	echo -e "Project: \e[92m$Project \e[0m"
	Result=`cat $data_summary | grep -i "Overall Result: " | cut -d '>' -f3 | cut -d '<' -f1`
	if [ $Result == Pass ] 
	then
		echo -e "Result Summary : \e[30;48;5;82m === Pass === \e[0m"
	else
		echo -e "Result Summary : \e[30;48;5;9m === Fail === \e[0m"
	fi
	
	echo "C0   (Summary/TPA)	: $c0	$c0_tpa"
	echo "C1   (Summary/TPA)	: $c1	$c1_tpa"
	echo "MCDC (Summary/TPA)	: $mcdc	$mcdc_tpa"
	
	echo ================================
}
####################
find . -type f -name "test_summary.html" > list_test_summary
 
rm -rf list_project fill_MCDC_excel

for link_summary in `cat list_test_summary`
do
	c0_tpa="None" 		# reset value
	c1_tpa="None"		# reset value
	mcdc_tpa="None"		# reset value
	#echo ${link_summary%/*}
	cd ${link_summary%/*}
	data_tpa=`find . -type f -name "*.tpa"`
	data_summary=`find . -type f -name "test_summary.html"`

	if [[ -n $data_tpa ]] # check xem co file tpa chua
	then # neu da co file tpa thi so sanh voi file summary
		# add user name > tpa
		myuser=$(whoami) #for tpa file
		c0=`cat $data_summary | grep -i -A 3 "Statement (S)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		c1=`cat $data_summary | grep -i -A 3 "Decision (D)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		mcdc=`cat $data_summary | grep -i -A 3 "MC/DC - unique cause (U)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		sed -i "s/<NTUserID>.*/<NTUserID>$myuser<\/NTUserID>/" $data_tpa #for tpa file
		sed -i "13s/<Verdict>.*/<Verdict>Passed<\/Verdict>/" $data_tpa #for tpa file
		sed -i "19s/<Percentage>.*/<Percentage>$c0<\/Percentage>/" $data_tpa #for tpa file
		sed -i "25s/<Percentage>.*/<Percentage>$c1<\/Percentage>/" $data_tpa #for tpa file
		sed -i "31s/<Percentage>.*/<Percentage>$mcdc<\/Percentage>/" $data_tpa #for tpa file
		
		# c0_tpa=`cat $data_tpa | sed -n "19p" | sed "s/[^0-9]//g"`
		# c1_tpa=`cat $data_tpa | sed -n "25p" | sed "s/[^0-9]//g"`
		# mcdc_tpa=`cat $data_tpa | sed -n "31p" | sed "s/[^0-9]//g"`
		READ_MCDC_SUMMARY
	else # neu chua co file summary thi in data mcdc summary
		echo -e "\e[93m TPA (JOEM): File doesn't exist. (Skip for COEM) \e[0m"
		c0=`cat $data_summary | grep -i -A 3 "Statement (S)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		c1=`cat $data_summary | grep -i -A 3 "Decision (D)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		mcdc=`cat $data_summary | grep -i -A 3 "MC/DC - unique cause (U)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		READ_MCDC_SUMMARY
	fi

	cd ../../../ # quay tro lai thu muc ngoai cung	
	# echo $Project >> list_project # tao file nay de check AR WalkThougth COEM
	# echo "$c0	$c1	$mcdc" >> fill_MCDC_excel
done
rm -rf list_test_summary
read -n 1 -r -s -p $'Press enter to exit...\n'

exit 

	