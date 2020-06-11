#!/bin/bash -x
find -type d -maxdepth 1 > list_folder

for file in `cat list_folder`
do
	echo $file
	if [[ $file != "." ]]
	then
		zip -r $file.zip $file
	fi
	
done 

rm -rf list_folder
read -n 1 -r -s -p $'Press enter to exit...\n'