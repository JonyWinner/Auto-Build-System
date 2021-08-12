#!/bin/bash
set -o errexit

echo -n "输入你在github上的名字:"
read name
echo -n "输入你注册github的邮箱:"
read email
git config --global user.name "$name"
git config --global user.email "$email"
echo "配置完成!"