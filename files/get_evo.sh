#!/bin/bash
set -o errexit
source files/get_work.sh

mkdir evo
cd evo
echo "开始获取源码咯，请确认你的网络畅通，需要科学上网"
read -p "是否已经科学上网？(Y/N)" vpn
case $vpn in
	[yY])
		echo "请继续"
		;;
	[nN])
		echo "请连接VPN后再试"
		exit
		;;
	*)
		echo "输入Y/N!"
		exit
		;;
esac

repo init -u https://github.com/Evolution-X/manifest -b elle --depth=1
repo sync -c -j$(nproc --all) --force-sync --no-clone-bundle --no-tags
echo "源码获取完成"
