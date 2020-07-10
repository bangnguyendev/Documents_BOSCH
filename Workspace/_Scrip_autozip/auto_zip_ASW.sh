#!/bin/bash -x
rm -rf ./OUTPUT
rm -rf `find -type f -name "MT_*.zip"`
find -maxdepth 1 -mindepth 1 -type d > list_folder
link_goc=`pwd`
echo -e "\e[92m Zip Running .......  \e[0m"
for file in `cat list_folder`
do
	echo Thu muc cha: $file
	cd $file

	file_name=`find -maxdepth 1 -mindepth 1 -type d | grep "MT_"|cut -d '/' -f2`
	echo Thu muc can Zip: $file_name
	7z a $file_name.zip `find -maxdepth 1 -mindepth 1 -type d | grep "MT_"`
	echo -e "\e[30;48;5;82m $file_name.zip Done! \e[0m"
	echo -e "\e[93m ============================ \e[0m"
	cd $link_goc
done 

mkdir -p ./OUTPUT
find -type f -name "MT_*.zip" > list_MT
cat list_MT
echo -e "\e[92m Copying to Output .......  \e[0m"
cp `cat list_MT` ./OUTPUT
for del in `cat list_MT`
do
	rm -rf $del
done

rm -rf list_folder list_MT
read -n 1 -r -s -p $'Press enter to exit...\n'