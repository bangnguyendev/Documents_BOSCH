#!bin/bash

cat ATT_Report.xml | sed -n '/<OutputSignals>/,/<\/OutputSignals>/p' | sed -e 's|<\!\[CDATA\[||g' -e 's|\]||g' | egrep -v 'SignalName|SignalVerdict|Time|Expected|Tolerance' | sed '/SignalDetail.*$/d' | sed 's/<Signal>//g' | sed 's/><\/Signal>//g' | sed 's/\s\+//g' | tr '\n' ',' | sed 's/<\/\w\+>,/\n/g' | sed 's/<\w\+>//g' | sed 's/^,//g' | sed 's/,$//g' | sed 's/,/ /g' 

read -n 1 -r -s -p $'Press enter to exit...\n'