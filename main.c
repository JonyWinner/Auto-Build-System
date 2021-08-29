#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void times(void);
int main()
{
	char envi,sys,git,choose,rec;
	times();
	printf("**************************************\n");
	printf("*    Weicome to Auto build system    *\n");
	printf("**************************************\n");
	printf("\n");
	printf("**************************************\n");
	printf("*A.One key build       		     *\n");
	printf("*B.Install environment               *\n");
	printf("*C.Config git                        *\n");
	printf("*D.Build Rec                         *\n");
	printf("*E.Exit                              *\n");
	printf("**************************************\n");

	printf("Please Choose：\n");
	scanf("%c",&choose);
	getchar();

	switch(choose)
	{
		case 'A':
			system("clear");
			times();
			printf("Have you installed environment？(Y/N)\n");
			scanf("%c",&envi);
			getchar();
			if (envi == 'N')
			{
				system("./files/envi.sh"); //run .sh to install environment
			}
			else
			{
				printf("OK!\n");
			}
			
			printf("Have you config git?(Y/N)\n");
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
			
			printf("Choose the system yoh want to build：\n");
			printf("A.pe B.peplus C.evo D.dotOS E.Arrow F.Crdroid G.Havoc\n");
			printf("H.Project Sakura I.ShapeShift \n");
			printf("Please choose:(enter number)\n");
			scanf("%c",&sys);
	
			switch(sys)
			{
				case 'A' : system("./files/rom/get_pe.sh"); break;
				case 'B' : system("./files/rom/get_pep.sh"); break;
				case 'C' : system("./files/rom/get_evo.sh"); break;
				case 'D' : system("./files/rom/get_dot.sh"); break;
				case 'E' : system("./files/rom/get_arrow.sh"); break;
				case 'F' : system("./files/rom/get_crdroid.sh"); break;
				case 'G' : system("./files/rom/get_havoc.sh"); break;
				case 'H' : system("./files/rom/get_sakura.sh"); break;
				case 'I' : system("./files/rom/get_ssos.sh"); break;
				default : printf("Not support!\n"); break;
			}
	
			getchar();
			printf("Getting config......\n");
			system("./files/build.sh");
			break;

		case 'B':
			system("clear");
			times();
			system("./files/envi.sh");
			break;

		case 'C':
			system("clear");
			times();
			system("./files/config_git.sh");
			break;

		case 'D':
			system("clear");
			times();
			printf("Choose the REC you want to build:\n");
			printf("A.twrp B.OrangeFox C.PBRP\n");
			scanf("%c",&rec);

			switch(rec)
			{	
				case 'A':
					system("./files/rec/get_twrp.sh");
					break;

				case 'B':
					system("./files/rec/get_ofx.sh");
					break;

				case 'C':
					system("./files/rec/get_pbrp.sh");
					break;

				default:
					printf("Not support!\n");
					break;
			}


		case 'E':
			system("exit");
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
	printf("Time：%s",buf);
	return 0;	
}
