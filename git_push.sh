#!/bin/sh
git add .
git commit -m "Updated file."
git log -p
git push
read -n 1 -r -s -p $'Press enter to exit...\n'