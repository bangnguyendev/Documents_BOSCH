#!/bin/bash

find . -type f -name "test_summary.html" > list_test_summary

cat list_test_summary | while read line; do

	echo $line
	cat $line

done
