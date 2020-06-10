#!/bin/bash
find -maxdepth 1 > list_folder

mkdir -p OUTPUT_PSW_COPY
echo =========list_class===========
cat list_class
echo =========list_folder==========
cat list_folder
echo ====================

for line in `cat list_class`
do
	name=`echo $line`
	cat list_folder | grep "$name"

	name_copy=`cat list_folder | grep "$name"`

	cp -r $name_copy ./OUTPUT_PSW_COPY
	echo ===
done

rm -rf  list_folder