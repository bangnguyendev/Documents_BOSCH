<<<<<<< HEAD
#!/bin/bash
count=1
cat list_project | while read line; do # load ten cac func test
rm -rf temp_link
echo "$count :	 $line"
find . -type d -iname "$line" >> temp_link # gan vao file temp de tranh truong hop co 2 ten func giong nhau
	cat temp_link | while read link; do # neu co nhieu hon 1 ten func giong nhau thi no se dc liet ke ra
=======
count=1
cat list_project | while read line; do
rm -rf temp_link
echo "$count :	 $line"
find . -type d -iname "$line" >> temp_link
	cat temp_link | while read link; do
>>>>>>> f635df3e19ecb4b4bd36a8b2ab894bc2c4055e55
		if [ -d $link ]
		then
			echo -e "Result: \e[92m$link \e[0m"
		else
<<<<<<< HEAD
			echo -e "Result: \e[30;48;5;9mFail: $line \e[0m"
=======
			echo -e "Result : \e[30;48;5;9m  Fail: $line  \e[0m"
>>>>>>> f635df3e19ecb4b4bd36a8b2ab894bc2c4055e55
		fi
	done
((count++))
echo ============
done
rm -rf temp_link
<<<<<<< HEAD

=======
>>>>>>> f635df3e19ecb4b4bd36a8b2ab894bc2c4055e55
read -n 1 -r -s -p $'Press enter to exit...\n'