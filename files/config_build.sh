#!/bin/bash
set -o errexit

echo -n "Enter your device manufacturer: (Lower case)"
read manufacturer
echo -n "Enter your device product: (Lower case)"
read product
echo -n "Enter your device tree github link:"
read dt
git clone $dt device/$manufacturer/$product
echo -n "Enter your kernel tree link:"
read kt
git clone $kt kernel/$manufacturer/$product
echo -n "Enter vendor tree link:"
read vt
git clone $dt vendor/$manufacturer/$product
echo "Getting ready"
