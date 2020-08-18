#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 256

void binary(char b,char kk[])
{
	char str[MAX_STR]={0};
	int x,y,z;
	x=b%2;
	b/=2;
	y=b%2;
	z=b/2;
	printf("xyz:%d %d %d\n",x,y,z);
	if(x==1)
	{
		str[0]='x';
	}
	else
	{
		str[0]='-';
	}
	if(y==1)
	{
		str[1]='w';
	}
	else
	{
		str[1]='-';
	}
	if(z==1)
	{
		str[2]='r';
	}
	else
	{
		str[2]='-';
	}
	printf("str[0]str[1]str[2]:%c%c%c\n",str[0],str[1],str[2]);
	kk=str;
	
}

int main(void)
{
	int i,num;
	char a[MAX_STR]={0};
	char kk[MAX_STR]={0};
	//memset(a,0,MAX_STR);
	printf("please input command:");
	gets(a);
	if(0==strcmp("quit",a))
	{
		return 0;
	}
	#if 0
	for(i=0;i<3;i++)
	{
		binary(a[i],kk);
		printf("%c\n",kk[i]);
	}
	#endif
	for(i=0;i<3;i++)
	{
		num=a[i]-'0';
		if(num>7&&num<0)
		{
			printf("you input number error!\n");	
		}
		if(num&4)
		{
			printf("r");
		}
		else if(num&2)
		{
			printf("w");
		}
		else if(num&4)
		{
			printf("x");
		}
		else
		{
			printf("-");
		}
	}
	
}
