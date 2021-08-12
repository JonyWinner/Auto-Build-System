read -p "输入你想储存源码的位置(默认在/home/用户名下)(默认输入Y,反则输入N):" save

case $save in
	[yY])
		user=$(whoami)
		cd /home/$user
		;;
	[nN])
		echo "输入位置："
		read path
		cd $path
		;;
	*)
		echo "请输入一个路径！"
		exit
		;;
	esac

