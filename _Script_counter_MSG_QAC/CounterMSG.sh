# set -x
rm -rf count_MSG.c
for i in `cat listMSG.c`
do
	name_MSG=`echo $i`
	
	count_MSG=`grep -i "^$name_MSG " *.txt | wc -l`
	echo "$name_MSG	$count_MSG"
	count_MSG=`grep -i "^$name_MSG " *.txt | wc -l` >> count_MSG.c
	echo "$name_MSG	$count_MSG" >> count_MSG.c
done 
# set +x