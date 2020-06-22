link_project=`pwd`
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
		echo -e "\e[93m ============================ \e[0m"
	else
		echo -e "\e[91m ===Khong co Documents=== \e[0m"
	fi

	cd $link_MT_current
	ReportRTRT=`find ./ -type f -name 'ReportRTRT.txt'`
	if [[ -f $ReportRTRT ]]
	then
		echo -e "\e[92m ===ReportRTRT=== \e[0m"
		cat $ReportRTRT | grep -A 6 "Conclusion" |egrep "Statement blocks|Decisions|Modified conditions|Multiple conditions|----"
		echo -e "\e[93m ============================ \e[0m"
	else
		echo -e "\e[91m ===Khong co ReportRTRT=== \e[0m"
	fi	

	cd $link_project
done
rm -rf list_MT
read -n 1 -r -s -p $'Press enter to exit...\n'


