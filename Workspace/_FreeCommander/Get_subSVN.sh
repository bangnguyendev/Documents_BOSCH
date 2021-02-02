#!bin/bash 
i=1;
j=$#;
#set -x
rm -rf temp.tempNDB
while [ $i -le $j ] 
do
    echo "File - $i: $1"
	#svn up $1
	svn info "$1" | grep -i "^Name\|^Url:\|^Last Changed Rev" >> temp.tempNDB
	echo " " >> temp.tempNDB
    i=$((i + 1))
    shift 1
done
cat temp.tempNDB | clip
rm -rf temp.tempNDB
#set +x