#1/bin/bash

for value in `cat list.h`
do
echo $value
temp_name_1="$value"
temp_name_2=".h"
temp_name=$temp_name_1$temp_name_2
rm -rf $temp_name
touch $temp_name
echo ==================
echo Export file: $temp_name
echo ==================
typeset -u upper=$temp_name
printf \
"
Day la file %s
Day la file %s

#include "include.h"

" \
"$temp_name" "$upper" >> $temp_name
cat $temp_name
echo ==================
done

echo 'OK End'






