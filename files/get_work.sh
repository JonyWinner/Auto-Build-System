read -p "Enter the path you want to save source(default in /home/username)(default enter:Y,other enter:N):" save

case $save in
	[yY])
		user=$(whoami)
		cd /home/$user
		;;
	[nN])
		echo "Enter your path："
		read path
		cd $path
		;;
	*)
		echo "Please enter a path！"
		exit
		;;
	esac

