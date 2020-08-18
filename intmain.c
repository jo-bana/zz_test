#include <stdio.h>
#include <unistd.h>
#include <string.h>
/* atoi()函数将字符串类型转化成整型类型*/
#define MAX_SECOND 60
#define MAX_STRING 256

/*分割字符串函数改进版 返回冒号的个数*/
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


#if 0
//实现输出从1加到输入的数字的和
//如输入./kk 100 输出5050
int main(int argc,char **argv)
{
	int i;
	int j;
	int k;
	int sum;
	for(i=0;i<argc;i++)
	{	
		if(1==i)
		{
			j=atoi(argv[i]);
			j=((j+1)*j/2);
			printf("argv[%d]=%d\n",i,j);				
		}
		else
		{		
			printf("argv[%d]=%s\n",i,argv[i]);
		}
	}
}
#endif

#if 0
int find(char *srcStr,char block)
{
	int i,j=0;
	int len;
	len=strlen(srcStr);
	for(i=0;i<len;i++)
	{
		if(srcStr[i]==block)
		{
			j++;
		}
	}
	return j;
}
#endif

//argv[i]={'5',':','0','0','\0'};

int main(int argc,char **argv)
{
	if(2 != argc)
	{		
		printf("you input error argument!\n");
		printf("usage: %s time \n",argv[0]);		
		printf("example: %s 5:00 \n",argv[0]);
		return;
	}
	int i=1,j,k,sum=0;
	int seconds=0,minutes=0,hours=0;
	int num;
	//int line;
	
	char kkargv[MAX_STRING][MAX_STRING]={0};
	
	//num=find(argv[i],':');//查找冒号的个数
	
	num=strblock(argv[i],kkargv,':');

	if(num>2)
	{
		printf("you input error argument!\n");
		printf("usage: %s time \n",argv[0]);		
		printf("example: %s 5:00 \n",argv[0]);
		return;		
	}
	
	//line=sizeof(kkargv)/sizeof(kkargv[0]);
	//只输入秒
	//if(/*1==line &&*/ 0==atoi(kkargv[2]) && 0==atoi(kkargv[1]) && 0!=atoi(kkargv[0]))
	//if(1==line)	
	
	if(0==num)
	{
		seconds=atoi(kkargv[0]);
	}
	
	//只输入分秒
	//else if(/*2==line &&*/ 0!=atoi(kkargv[0]) && 0!=atoi(kkargv[1]) && 0==atoi(kkargv[2]))
	//else if(2==line)
	
	else if(1==num)
	{
		minutes=atoi(kkargv[0]);
		seconds=atoi(kkargv[1]);
	}
	
	//输入时分秒时
	//else if(/*3==line &&*/ 0!=atoi(kkargv[0]) && 0!=atoi(kkargv[1]) && 0!=atoi(kkargv[0]))
	//else if(3==line)	
	
	else if(2==num)
	{		
		hours=atoi(kkargv[0]);
		minutes=atoi(kkargv[1]);
		seconds=atoi(kkargv[2]);
	}
	
	#if 0
	//精简代码,判断时分秒输入，并且求总秒数
	for(i=num,j=1;i>=0;i--,j*=60)
	{
		seconds += atoi(kkargv[i])*j;
	}
	#endif
	
	sum=hours*3600+minutes*60+seconds;
	
	printf("hours:%d\n",hours);
	printf("minutes:%d\n",minutes);			
	printf("seconds:%d\n",seconds);
	printf("sum:%d\n",sum);
	printf("*********\n");
			
	if((hours<MAX_SECOND)&&(minutes<MAX_SECOND)&&(seconds<MAX_SECOND))
	{
		for(;sum>0;sum--)
		{
			usleep(1000);
			hours=sum/3600;
			//minutes=sum/60-hours*60;			
			minutes=(sum/60)%60;
			seconds=sum%60;					
			printf("%02d:%02d:%02d\b\b\b\b\b\b\b\b",hours,minutes,seconds);					
		}
	}
	else
	{
		printf("Please enter the correct time range!\n");
	}
	printf("time is over!\n");
}
