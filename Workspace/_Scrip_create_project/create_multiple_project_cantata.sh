#!/bin/bash

function create_Stub_h()
{
				rm -rf Output_PSW/$name_Project/hdr/project/stubs.h
				touch Output_PSW/$name_Project/hdr/project/stubs.h				
				# generate header file 
				print_time=`date +"%c"` 
				echo " /*" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **************************************************" >> Output_PSW/$name_Project/hdr/project/stubs.h
				
				echo " **     Project: $name_Project" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " ** Header File: stubs.h" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **    Function: $file" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **************************************************" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **  Created on: $print_time" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **      Author: $(uname -n)" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **   Copyright: bang.nguyen-duy" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " **************************************************" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo " */" >> Output_PSW/$name_Project/hdr/project/stubs.h
				
				printf "\n\n\n" >> Output_PSW/$name_Project/hdr/project/stubs.h				
				# tao ten viet hoa
				name_uppper=$(echo "stubs.h""_"| sed 's/\./_/g'| tr -s '[:lower:]' '[:upper:]')
				
				echo "#ifndef $name_uppper" >> Output_PSW/$name_Project/hdr/project/stubs.h
				echo "#define $name_uppper" >> Output_PSW/$name_Project/hdr/project/stubs.h
				printf '\n#include "include.h"' >> Output_PSW/$name_Project/hdr/project/stubs.h
				printf "\n\n\n" >> Output_PSW/$name_Project/hdr/project/stubs.h
				
				echo "#endif /*  $name_uppper  */" >> Output_PSW/$name_Project/hdr/project/stubs.h
}
function create_Stub_c()
{
				rm -rf Output_PSW/$name_Project/Stubs.c
				touch Output_PSW/$name_Project/Stubs.c				
				# generate header file 
				print_time=`date +"%c"` 
				echo " /*" >> Output_PSW/$name_Project/Stubs.c
				echo " **************************************************" >> Output_PSW/$name_Project/Stubs.c
				
				echo " **     Project: $name_Project" >> Output_PSW/$name_Project/Stubs.c
				echo " ** Header File: Stubs.c" >> Output_PSW/$name_Project/Stubs.c
				echo " **    Function: $file" >> Output_PSW/$name_Project/Stubs.c
				echo " **************************************************" >> Output_PSW/$name_Project/Stubs.c
				echo " **" >> Output_PSW/$name_Project/Stubs.c
				echo " **  Created on: $print_time" >> Output_PSW/$name_Project/Stubs.c
				echo " **      Author: $(uname -n)" >> Output_PSW/$name_Project/Stubs.c
				echo " **   Copyright: bang.nguyen-duy" >> Output_PSW/$name_Project/Stubs.c
				echo " **************************************************" >> Output_PSW/$name_Project/Stubs.c
				echo " */" >> Output_PSW/$name_Project/Stubs.c
				
				printf "\n\n\n" >> Output_PSW/$name_Project/Stubs.c				
				# tao ten viet hoa
				name_uppper=$(echo "Stubs.c""_"| sed 's/\./_/g'| tr -s '[:lower:]' '[:upper:]')
				
				echo "#ifndef $name_uppper" >> Output_PSW/$name_Project/Stubs.c
				echo "#define $name_uppper" >> Output_PSW/$name_Project/Stubs.c
				printf '\n#include "include.h"' >> Output_PSW/$name_Project/Stubs.c
				printf "\n\n\n" >> Output_PSW/$name_Project/Stubs.c
				
				echo "#endif /*  $name_uppper  */" >> Output_PSW/$name_Project/Stubs.c
}
function create_header_h()
{
				rm -rf Output_PSW/$name_Project/hdr/empty/$i_add_header
				touch Output_PSW/$name_Project/hdr/empty/$i_add_header				
				# generate header file 
				print_time=`date +"%c"` 
				echo " /*" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **************************************************" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				
				echo " **     Project: $name_Project" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " ** Header File: $i_add_header" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **    Function: $file" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **************************************************" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **  Created on: $print_time" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **      Author: $(uname -n)" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **   Copyright: bang.nguyen-duy" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " **************************************************" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo " */" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				
				printf "\n\n\n" >> Output_PSW/$name_Project/hdr/empty/$i_add_header				
				# tao ten viet hoa
				name_uppper=$(echo "$i_add_header""_"| sed 's/\./_/g'| tr -s '[:lower:]' '[:upper:]')
				
				echo "#ifndef $name_uppper" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				echo "#define $name_uppper" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				printf '\n#include "include.h"' >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				printf "\n\n\n" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				
				echo "#endif /*  $name_uppper  */" >> Output_PSW/$name_Project/hdr/empty/$i_add_header
				
}

for i in {0..18} {18..0} ; do echo -en "\e[48;5;${i}m \e[0m" ; done ; echo

echo -e "\e[0m"
cd ../
mkdir -p Output_PSW
rm -rf Output_PSW/log.txt
touch Output_PSW/log.txt

for i in $(cat _Scrip_create_project/list.h | tr -s '\t' '/')
do
	
	name_DataBase=`echo $i | cut -d '/' -f1`
	name_PATH=`echo $i | cut -d '/' -f2`
	name_var=`echo $i | cut -d '/' -f3`
	echo "PATH_DATABASE:" $name_DataBase
	echo "PATH_Folder  :" $name_PATH
	echo "File_Name    :" $name_var
	echo ==================================

	find |grep -i '\.c$'  |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$"

	count=`find |grep -i '\.c$' |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$" -c`

	echo -e "\e[30;48;5;82m Luong File tim thay:  $count  \e[0m"

	# KIEM TRA XEM CO 1 KET QUA KHOP HAY KHONG
	if [ $count -eq 1 ]
	then		
		echo -e "\e[30;48;5;82m ===Mot Ket Qua Khop=== \e[0m"
		
		file=`find |grep -i '\.c$'  |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$"`		
		# kiem tra lai xem duong dan file co ton tai hay khong
		if [ -f "$file" ]
		then
			#tao thu muc Project
			name_Project=`echo $name_var | cut -d '.' -f1`
			mkdir -p Output_PSW/$name_Project
			# copy file thu vien database
			cp -r _Scrip_create_project/hdr Output_PSW/$name_Project
			# tim file header source, tao file header
			add_header=`cat $file |grep -i '#include'|  cut -d '"' -f2`
			
			for i_add_header in $add_header
			do
				#echo $add_header
				create_header_h				
			done
			#####################################
			# create Stub file
			create_Stub_h
			create_Stub_c
			# copy file thuoc tinh cantata
			cp _Scrip_create_project/.cproject Output_PSW/$name_Project
			sed -i "s/Sample_Test/$name_Project/g" Output_PSW/$name_Project/.cproject
			# copy file thuoc tinh cantata
			cp _Scrip_create_project/.project Output_PSW/$name_Project	
			sed -i "s/Sample_Test/$name_Project/g" Output_PSW/$name_Project/.project			
			# copy file source c
			cp $file Output_PSW/$name_Project

			echo -e "\e[1;38;5;46m$file found. "
			echo -e "\e[30;48;5;82m ===============Done============== \e[0m"

		else
			echo "$name_var not found." >> ./Output_PSW/log.txt
			echo "===========================================" >> ./Output_PSW/log.txt
			echo -e "\e[91m$name_var not found."
			echo -e "\e[30;48;5;9m ===FALSE=== \e[0m"
		fi
		
	else 
	# NEU KHONG CO KET QUA HAY QUA NHIEU KET QUA THI KHONG ADD FILE
		
		if [ $count -eq 0 ] # KHONG CO KET QUA
		then
			echo -e "\e[30;48;5;9m ===$name_var not found.=== \e[0m" 
			echo "$name_var not found." >> ./Output_PSW/log.txt
			echo "===========================================" >> ./Output_PSW/log.txt
			
		else 				# QUA NHIEU KET QUA
			echo -e "\e[30;48;5;9m ===Co Nhieu Ket Qua Giong Nhau=== \e[0m"
			echo "$file" >> log.txt
			echo "$name_var many files exist." >> ./Output_PSW/log.txt
			echo "===========================================" >> ./Output_PSW/log.txt
		fi
			echo -e "\e[30;48;5;9m ==============FALSE============== \e[0m"

	fi

done





