read -p "File name:" name_file
find ./ -name "*$name_file*"
read -n 1 -r -s -p $'Press enter to exit...\n'