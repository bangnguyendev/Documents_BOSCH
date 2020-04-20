#!bin/bash

for i in {1..10}
do
	mkdir Proj_$i
	cd Proj_$i
	for dem in {1..10}
	do
		mkdir Thu_muc_$dem
		cd Thu_muc_$dem
		touch Ham_{1..20}.c
		touch Header_{1..20}.h
		touch _File_thu_vien_{1..20}.txt
		cd ..
	done
	cd ..
done
