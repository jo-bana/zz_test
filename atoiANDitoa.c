#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 256

//字符串转整型
int zzatoi(char str[])
{
	int i,len,num;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]<'0'||str[i]>'9')
		{
			return -1;
		}
		num=num*10+str[i]-'0';
	}
	return num;	
}
//整型转字符串
char* zzitoa(int value)
{
	char p[MAX_STR]={0};
	int i=0,j;
	while(value)
	{
		p[i++]=value%10+'0';
		value/=10;
	}
	char *q=(char*)malloc(sizeof(char)*(i+1));
	if(NULL== q)
	{
		printf("malloc faulure!\n");
		return NULL;
	}
	memset(q,0,sizeof(char)*(i+1));
	for(j=0;j<i;i++)
	{
		q[j]=p[i-j-1];
		q[j+1]='\0';
	}
	return p;
}
void main()
{
	int result=0;
	char zzstr1[]={"135"};
	int  zzstr2[]={135};
	char *p;
	int value=135;
	result=zzatoi(zzstr1);
	printf("integer:%d",result);
	printf("*******************\n");
	p=zzitoa(value);
	printf("string:%c%c%c",zzstr2[0],zzstr2[1],zzstr2[2]);
	free(p);
}
