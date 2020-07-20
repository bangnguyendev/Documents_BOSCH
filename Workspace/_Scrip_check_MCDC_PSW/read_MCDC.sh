#!/bin/bash
# Read MC/DC
# Xoa file autotest_generation.txt
# Don dep file bash, py
####################
# ham read & printf mcdc
####################
link_current=`pwd` # save dir current
find . -type f -name "test_summary.html" > list_test_summary
link_checkpy='/c/_BangNguyen/documents_bosch/Workspace/_Scrip_check_MCDC_PSW/check_excel_PSW.py'
rm -rf list_folder_UT 

find -maxdepth 1 -mindepth 1 -type d -name "UT_[0-9][0-9][0-9]*" > list_folder_UT
for link_class_UT in `cat list_folder_UT`
do
	echo -e "\e[92m $link_class_UT \e[0m"
	cd $link_class_UT
	#check test_summary.html
	test_summary=`find . -type f -name "test_summary.html"`
	if [[ -f $test_summary ]]
	then
		echo -e "test_summary 	: \e[30;48;5;82m  Yes  \e[0m"
		
		c0=`cat $test_summary | grep -i -A 3 "Statement (S)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		c1=`cat $test_summary | grep -i -A 3 "Decision (D)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		mcdc=`cat $test_summary | grep -i -A 3 "MC/DC - unique cause (U)" | grep -i "text-align:center;" | cut -d '>' -f2 | cut -d '%' -f1`
		
		echo "C0   (Summary)	: $c0	"
		echo "C1   (Summary)	: $c1	"
		echo "MCDC (Summary)	: $mcdc	"				
	else
		echo -e "test_summary 	: \e[30;48;5;9m  None  \e[0m"
	fi
	#check test_report.html
	test_report=`find . -type f -name "test_report.html"`
	if [[ -f $test_report ]]
	then
		echo -e "test_report 	: \e[30;48;5;82m  Yes  \e[0m"
	else
		echo -e "test_report 	: \e[30;48;5;9m  None  \e[0m"
	fi
	file_doc_excel=`find . -type f -name "*_CodeCoverage_or_Fail_Reason.xls"`
	if [[ -f $file_doc_excel ]]
	then
		echo -e "file_doc_excel 	: \e[30;48;5;82m  Yes  \e[0m"
		python $link_checkpy $file_doc_excel
	else
		echo -e "file_doc_excel 	: \e[30;48;5;9m  None  \e[0m"
	fi
	echo =====================================
	cd $link_current
done

# for link_summary in `cat list_test_summary`
# do
	# #echo ${link_summary%/*}
	# cd ${link_summary%/*}
	
	# data_summary=`find . -type f -name "test_summary.html"`
	
	# #check test_report.html
	# test_report=`find . -type f -name "test_report.html"`
	
	# PRINT_MCDC_SUMMARY
	

	# #xoa file autotest_generation.txt
	# rm -rf autotest_generation.txt
	# cd $link_current # quay tro lai thu muc ngoai cung	
	# # echo $Project >> list_project # tao file nay de check AR WalkThougth COEM

# done

#check delete py sh
find ./ -type f -name '*.sh' -o -name '*.py' | egrep -v "read_MCDC.sh|auto_zip.sh" > list_clear_scrip

for clear_file in `cat list_clear_scrip`
do
	rm -rf $clear_file
	echo ...rm $clear_file
done

rm -rf list_test_summary list_clear_scrip
read -n 1 -r -s -p $'Press enter to exit...\n'


	