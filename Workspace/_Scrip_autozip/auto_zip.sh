#!/bin/bash -x
find -maxdepth 1 -mindepth 1 -type d -name "UT_[0-9][0-9][0-9]*"  > list_folder

for file in `cat list_folder`
do
	echo -e "\e[30;48;5;82m $file \e[0m"

	7z a $file.zip $file

done 

rm -rf list_folder
read -n 1 -r -s -p $'Press enter to exit...\n'