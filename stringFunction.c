#include <stdio.h>
#include <assert.h>
//#include <string.h>
#define MAX_SIZE 256
//左震的strcp
char* zzstrcpy(char*des,char*source)
{
	if(!des||!source)
	{
		return NULL;
	}
	char *d=des;
	while((*d++=*source++)!='\0');
	return des;
}
//颠倒字符串函数
/*此函数运行结果和预期不符，出现了没有完全覆盖原数组导致的数据混乱*/
#if 0
void reverseStr(char *str)
{
	if(!str)
	{
		return;
	}
	int len,j;
	char tmp[MAX_SIZE];	
	char *d=tmp;
	len=strlen(str);
	for(j=len;j>0;j--)
	{	
		d[j]=str[len-j];//第一个塞到新数组最后一位
	}
	for(j=len;j>0;j--)
	{
		str[j]=d[j];//传递到原来的字符串数组
	}
		
	return;
}
#endif

char *strcpy(char *strDest, const char *strScr)
{
	char *address=strDest;

	assert((strDest!=NULL)&&(strScr!=NULL));
	while((*strDest++=*strScr++)!='\0')
	{
		NULL;
	}
	return address;
}

char *strcat(char *strDest, const char *strScr)
{
	char *address=strDest;

	assert((strDest!=NULL)&&(strScr!=NULL));
	while(*strDest)
	{
		strDest++;
	}
	while(*strDest++=*strScr++)
	{
		NULL;
	}
	return address;
}

int strcmp(const char *strDest, const char *strScr)
{
	assert((strDest!='\0')&&(strScr!='\0'));
	while(*strDest&&*strScr&&(*strDest==*strScr))
	{
		strDest++;
		strScr++;
	}
	return *strDest-*strScr;
}

int strlen(const char *str)
{
	int len=0;
	assert(str!=NULL);
	while(*str++)
	{
		len++;
	}
	return len;
}

void main()
{
	char a[MAX_SIZE]={0};
	char b[MAX_SIZE]="hello world!";
	printf("a:%s   b:%s\n",a,b);
	zzstrcpy(a,b);
	printf("a:%s   b:%s\n",a,b);
	
	int ret=strcmp(a,b);
	printf("when equal ret:%d\n",ret);
	//reverseStr(a);
	//printf("a:%s   b:%s\n",a,b);
	strcpy(a,b);
	printf("a:%s   b:%s\n",a,b);
	strcat(a,b);
	printf("a:%s   b:%s\n",a,b);
	ret=strcmp(a,b);
	printf("when not equal ret:%d\n",ret);
	
	int len=strlen(a);
	printf("len:%d\n",len);
}
