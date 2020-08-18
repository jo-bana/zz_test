#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define MAX_STR 256
#define ERROR  -1
 
void direction(char *a)
{
	int i;
	char drc[]={'w','a','s','d'};
	for(i=0;i<4;i++)//遍历方向键位
	{
		if(0==strcmp(a,drc[i]))
		{
			printf("*");
		}
		else
		{
			return ERROR;
		}
	#if 0
		switch(a)
		{
			case ():
					;
					break;
			case ():
					;
					break;
			default:
					;
					break;
	
		}
	#endif
	}
}

void main()
{
	char a[MAX_STR]={0};
	while(1)
	{
		printf("***********************\n");
		scanf("%s",a);
		direction(a);
		printf("***********************\n");
		if(0==strcmp(a,"quit"))
		{
			break;
		}
		sleep(2);
		system("clear");
	}

}
