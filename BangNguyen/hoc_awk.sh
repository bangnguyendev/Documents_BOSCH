#!bin/bash
for i_PATH_DB, i_PATH_FILE, i_NAME_FILE in `awk '{if(NR!=1){print $1 $2 $3;}}' list.h`
do 
	PATH_DB=$i_PATH_DB
	PATH_FILE=$i_PATH_FILE
	NAME_FILE=$i_NAME_FILE
	echo $PATH_DB hihi
	echo $PATH_FILE hihi
	echo $NAME_FILE hihi

done





