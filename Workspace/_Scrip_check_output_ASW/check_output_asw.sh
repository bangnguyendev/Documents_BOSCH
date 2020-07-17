link_project=`pwd`
#link file check.py
link_check_py="/c/_BangNguyen/documents_bosch/Workspace/_Scrip_check_output_ASW/check_excel.py"
find ./ -maxdepth 1 -mindepth 1 -type d | grep "MT_[0-9]\{1,3\}" > list_MT
for goto_MT in `cat list_MT`
do
	echo -e "\e[36m ============================ \e[0m"
	echo -e "\e[30;48;5;82m $goto_MT \e[0m"
	cd $goto_MT
	link_MT_current=`pwd`
	docs=`find ./ -type d -name 'Documents'`

	if [[ -d $docs ]]
	then
		cd $docs
		echo -e "\e[92m ===Documents=== \e[0m"
		find ./ -type f
						
		link_excel=`find ./ -type f -name 'TD_*.xlsm'`
		if [[ -f $link_excel ]]
		then
			# cover link tuong doi >>> link tueyt doi
			link_excel=`realpath $link_excel`
		else
			echo -e "\e[91m ====> Error: Khong co TD_*.xlsm  \e[0m"
		fi

		link_plt=`find ./ -type f -name '*.plt' | wc -l`
		if [[ $link_plt < 1 ]]
		then
			echo -e "\e[91m ====> Error: Khong co *.plt  \e[0m"
		fi
		
		link_htm=`find ./ -type f -name '*.htm' | wc -l`
		if [[ $link_htm < 1 ]]
		then
			echo -e "\e[91m ====> Error: Khong co *.htm  \e[0m"
		fi
		
		
		echo -e "\e[93m ============================ \e[0m"
	else
		echo -e "\e[91m ===Khong co Documents=== \e[0m"
	fi

	cd $link_MT_current
	ReportRTRT=`find ./ -type f -name 'ReportRTRT.txt'`
	if [[ -f $ReportRTRT ]]
	then
		echo -e "\e[92m ===ReportRTRT=== \e[0m"
		echo "			C0	C1	MCDC"
		cat $ReportRTRT | grep -A 6 "Conclusion" |egrep "Statement blocks|Decisions|Modified conditions"
		echo -e "\e[93m ============================ \e[0m"
		python $link_check_py $link_excel
		echo -e "\e[93m ============================ \e[0m"
	else
		echo -e "\e[91m ===Khong co ReportRTRT=== \e[0m"
	fi	

	cd $link_project
done
rm -rf list_MT
read -n 1 -r -s -p $'Press enter to exit...\n'


