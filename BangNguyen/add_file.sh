#1/bin/bash
read -p "=>> Nhap DataBase: " name_DataBase
read -p "=>> Nhap PATH: " name_PATH
read -p "=>> Nhap file: " name_var

for i in {0..18} {18..0} ; do echo -en "\e[48;5;${i}m \e[0m" ; done ; echo
echo -e "\e[0m"

find |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$"

file=`find |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$" `
count=`find |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$" -c`
echo -e "\e[30;48;5;82m Luong File tim thay: $count \e[0m"
if [ $count -eq 1 ]
then
# KIEM TRA XEM CO 1 KET QUA KHOP HAY KHONG
	echo -e "\e[30;48;5;82m ===Mot Ket Qua Khop=== \e[0m"
	if [ -f "$file" ]
	then
		cp -r ./hdr $name_var
		cp stub.c $name_var 
		cp `find |grep -i "$name_DataBase" |grep -i "$name_PATH" |grep -i "$name_var$"` $name_var	
		echo -e "\e[1;38;5;46m$file found. "
		echo -e "\e[30;48;5;82m ===Done=== \e[0m"
	else
		echo -e "\e[91m$name_var.c not found."
		echo -e "\e[30;48;5;9m ===FALSE=== \e[0m"
	fi
	
else 
# NEU KHONG CO KET QUA HAY QUA NHIEU KET QUA THI KHONG ADD FILE
	if [ $count -eq 0 ] # KHONG CO KET QUA
	then
		echo -e "\e[30;48;5;9m ===$name_var.c not found.=== \e[0m"
	else 				# QUA NHIEU KET QUA
		echo -e "\e[30;48;5;9m ===Co Nhieu Ket Qua Giong Nhau=== \e[0m"
	fi
		echo -e "\e[30;48;5;9m ==============FALSE============== \e[0m"

fi








