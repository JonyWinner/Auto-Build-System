#!/bin/bash
set -o errexit

user=$(whoami)
source /home/$user/build/files/config_build.sh
echo "Build Start!"
source build/envsetup.sh
lunch aosp_$product-userdebug
core=$(cat /proc/cpuinfo| grep "processor"|wc -l)
mka bacon -j$core
