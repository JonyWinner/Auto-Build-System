#!/bin/bash
set -o errexit

echo -n "Enter your github name:"
read name
echo -n "Enter your github email:"
read email
git config --global user.name "$name"
git config --global user.email "$email"
echo "Config conplete!"
