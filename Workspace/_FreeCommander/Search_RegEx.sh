# !/bin/sh
echo -e "\e[30;48;5;82m Searching in $1 \e[0m"
echo ==================
while [ 1 ]
do
    read -p "RegEx input:" name_file
	echo ==================
	find ./ -iname "*$name_file*"
	echo -e "\e[93m >>> Ctrl + C ->exit <<<\e[0m"
done
exit 