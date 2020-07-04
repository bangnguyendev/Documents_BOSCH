#!/bin/bash -x
find -maxdepth 1 -mindepth 1 -type d  > list_folder

for file in `cat list_folder`
do
	echo $file
	if [[ $file != "." ]]
	then
		7z a $file.zip $file
	fi
	
done 

rm -rf list_folder
read -n 1 -r -s -p $'Press enter to exit...\n'