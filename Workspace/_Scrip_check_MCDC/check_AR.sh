count=1
cat list_project | while read line; do
rm -rf temp_link
echo "$count :	 $line"
find . -type d -iname "$line" >> temp_link
	cat temp_link | while read link; do
		if [ -d $link ]
		then
			echo -e "Result: \e[92m$link \e[0m"
		else
			echo -e "Result : \e[30;48;5;9m  Fail: $line  \e[0m"
		fi
	done
((count++))
echo ============
done
read -n 1 -r -s -p $'Press enter to exit...\n'