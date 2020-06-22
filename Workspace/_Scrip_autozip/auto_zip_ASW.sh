#!/bin/bash -x
find -type d -maxdepth 1 -mindepth 1 > list_folder
link_goc=`pwd`
for file in `cat list_folder`
do
	echo $file
	cd $file
	ls
	find -type d -maxdepth 1 -mindepth 1 | grep "MT_"
	file_name=`find -type d -maxdepth 1 -mindepth 1 | grep "MT_"|cut -d '/' -f2`
	echo $file_name
	zip -r $file_name.zip `find -type d -maxdepth 1 -mindepth 1 | grep "MT_"`

	cd $link_goc
done 
find -type f -name "MT_*.zip"
rm -rf ./OUTPUT
mkdir -p ./OUTPUT
cp `find -type f -name "MT_*.zip"` ./OUTPUT
rm -rf list_folder
read -n 1 -r -s -p $'Press enter to exit...\n'