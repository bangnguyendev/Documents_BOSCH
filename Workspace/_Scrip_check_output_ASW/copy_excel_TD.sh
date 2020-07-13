find . -type f -name 'TD_*.xlsm' > list
mkdir -p OUTPUT_EXCEL
for i in `cat list`
do 
	cp $i ./OUTPUT_EXCEL
done
rm -rf list

