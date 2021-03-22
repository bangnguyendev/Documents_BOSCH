a=`find . -type d -name '*_UserDCM'`
echo $a
find $a -type f
cp -rf `find $a -type f` `find . -type d -name '*_DCM'`