#!/bin/bash
set -o errexit

echo "开始装环境了奥"
sudo apt update -y && apt upgrade -y && apt install -y libwxgtk3.0-dev bc bison build-essential ccache curl flex g++-multilib gcc-multilib git gnupg gperf imagemagick lib32ncurses5-dev lib32readline-dev lib32z1-dev liblz4-tool libncurses5 libncurses5-dev libsdl1.2-dev libssl-dev libxml2 libxml2-utils lzop pngcrush rsync schedtool squashfs-tools xsltproc zip zlib1g-dev repo neofetch
echo "安装完毕咯!"
