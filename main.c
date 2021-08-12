#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void times(void);
int main()
{
	char envi,sys,git,choose;
	times();
	printf("**************************************\n");
	printf("*    欢迎使用auto rom build system   *\n");
	printf("**************************************\n");
	printf("\n");
	printf("**************************************\n");
	printf("*A.一键编译  B.安装编译环境 C.配置git*\n");
	printf("**************************************\n");

	printf("请选择：\n");
	scanf("%c",&choose);
	switch(choose)
	{
		case 'A':
			printf("你是否已经安装编译环境？(Y/N)\n");
			scanf("%c",&envi);
			getchar();
			if (envi == 'N')
			{
				system("./files/envi.sh"); //执行sh来安装环境
			}
			else
			{
				printf("OK!\n");
			}
			
			printf("您是否已经配置好git?(Y/N)\n");
			scanf("%c",&git);
			getchar();
			if (git == 'N')
			{
				system("./files/config_git.sh");
			}
			else
			{
				printf("OK!\n");
			}
			
			printf("选择您要编译的系统：\n");
			printf("A.pe B.peplus C.evo D.dotOS E.Arrow");
			printf("请选择：(输入序号)\n");
			scanf("%c",&sys);
	
			switch(sys)
			{
				case 'A' : system("./files/get_pe.sh"); break;
				case 'B' : system("./files/get_pep.sh"); break;
				case 'C' : system("./files/get_evo.sh"); break;
				case 'D' : system("./files/get_dot.sh"); break;
				case 'E' : system("./files/get_arrow.sh"); break;
				default : printf("暂不支持编译此rom!\n"); break;
			}
	
			getchar();
			printf("现在开始准备编译所需文件,接下来请按照程序提示来.\n");
			system("./files/build.sh");
			break;

		case 'B':
			system("./files/envi.sh");
			break;

		case 'C':
			system("./files/config_git.sh");
			break;
	}
	
	
	return 0;
}

void times(void)
{
	time_t t;
	char buf[1024];
	time(&t);
	ctime_r(&t,buf);
	printf("当前时间：%s",buf);
	return 0;	
}
