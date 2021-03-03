#!bin/bash 
i=1;
j=$#;
#set -x
rm -rf temp.tempNDB
while [ $i -le $j ] 
do
    echo "File - $i: $1"
	name_file=`svn info "$1" | grep -i "^Name"` 
	echo "*$name_file*" >> temp.tempNDB # in đậm tên name file Redmine.
	svn info "$1" | grep -i "^Url:\|^Last Changed Rev" >> temp.tempNDB
	echo " " >> temp.tempNDB # xuống hàng
    i=$((i + 1))
    shift 1
done
cat temp.tempNDB | clip
rm -rf temp.tempNDB
#set +x