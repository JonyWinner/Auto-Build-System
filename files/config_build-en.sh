#!/bin/bash
set -o errexit

echo "如有不懂的地方,请看README.md,有详细介绍"
echo -n "输入你的机型厂商: (小写)"
read manufacturer
echo -n "输入你的机型代号: (小写)"
read product
echo -n "输入你的device tree地址:"
read dt
git clone $dt device/$manufacturer/$product
echo -n "输入你的kernel tree地址:"
read kt
git clone $kt kernel/$manufacturer/$product
echo -n "输入你的vendor tree地址:"
read vt
git clone $dt vendor/$manufacturer/$product
echo "准备完成"