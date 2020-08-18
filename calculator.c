#include <stdio.h>
#include <unistd.h>
#include <string.h>

//实现简单计算器的功能，包括加减乘除
#define MAX_STRING 256

int strblock(char *srcStr,char desStr[MAX_STRING][MAX_STRING],char block)
{
	int a,b,c=0;
	int len;
	len=strlen(srcStr);
	for(a=0,b=0;b<len;b++)
	{		 				
			if(srcStr[b]!=block)
			{
				desStr[a][c]=srcStr[b];
				c++;
			}
			else
			{				
				a++;
				c=0;
			}			
	}	
	return a;
}


int main(int argc,char **argv)
{
	int i,j=0;
	int num1=0,num2=0;
	int result=0;
	int number=0;
	char flag;
	char kkargv[MAX_STRING][MAX_STRING]={0};
	for(i=0;argv[1][i]!='\0';i++)
	{
		switch(argv[1][i])
		{
		#if 0
			case('+'):
			{
				flag='+';
				strblock(argv[1],kkargv,flag);
				printf("+%s\n",kkargv[0]);				
				printf("+%s\n",kkargv[1]);
				num1=atoi(kkargv[j++]);
				num2=atoi(kkargv[j++]);
				printf("+num1:%d\n",num1);
				printf("+num2:%d\n",num2);
				result+=num1+num2;
				//break;
			}
			case('-'):
			{
				flag='-';
				strblock(argv[1],kkargv,flag);				
				printf("-%s\n",kkargv[0]);				
				printf("-%s\n",kkargv[1]);
				num1=atoi(kkargv[j++]);
				num2=atoi(kkargv[j++]);
				printf("-num1:%d\n",num1);
				printf("-num2:%d\n",num2);
				result+=num1-num2;
				//break;
			}
		#endif

			case('+'):
			{
				flag='+';
				number=strblock(argv[1],kkargv,flag);
				printf("+%s\n",kkargv[0]);				
				printf("+%s\n",kkargv[1]);
				num1=atoi(kkargv[j++]);
				num2=atoi(kkargv[j]);
				printf("+num1:%d\n",num1);
				printf("+num2:%d\n",num2);
				result+=num1+num2;
				break;
			}
			case('-'):
			{
				flag='-';
				number=strblock(argv[1],kkargv,flag);				
				printf("-%s\n",kkargv[0]);				
				printf("-%s\n",kkargv[1]);
				num1=atoi(kkargv[j++]);
				num2=atoi(kkargv[j]);
				printf("-num1:%d\n",num1);
				printf("-num2:%d\n",num2);
				result+=num1-num2;
				break;
			}
			default:
			{
				break;
			}
		}		
	}
	printf("%s=%d\n",argv[1],result);
	return 0;
	
	//strblock(argv[1],kkargv,flag);
		
}
