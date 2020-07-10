find . -type f -name 'TD_*.xlsm' > list
mkdir -p OUTPUT
for i in `cat list`
do 
	cp $i ./OUTPUT
done
rm -rf list

