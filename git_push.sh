#!/bin/sh
git add .
git commit
git push
read -n 1 -r -s -p $'Press enter to exit...\n'
