#!/bin/bash
set -o errexit

echo "Enter your region:(en/cn)"
read region
if [ ! region == "en" ] then;
	./build-en
else
	./build-cn
fi

