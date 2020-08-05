#!/bin/sh
git add .
git commit --amend --author ="HeHe <conmeocon@meowmeow>"
git commit -m "Updated file."
git log -p master -1
git push
read -n 1 -r -s -p $'Press enter to exit...\n'
