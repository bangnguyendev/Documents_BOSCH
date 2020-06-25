#!/bin/bash
{
####################
echo 111111111111111
echo aaabbbbbbcccccc
read -n 1 -r -s -p $'Press enter to exit...\n'

} 2>&1 | tee outputs.log
exit 

	