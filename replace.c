#include <stdio.h>
#include <string.h>
#define MAX_STR 256

void str_replace(char *srcStr,char *replaceStr,int pos,int len)
{
	int i,j=0,k;
	char kkstr[MAX_STR]={0};
	int length=strlen(replaceStr);
	for(k=0;k<pos;k++)
	{
		kkstr[k]=srcStr[k];
	}
	for(i=pos;i<pos+len;i++,j++)
	{
		if(j<length)
		{
			kkstr[k]=replaceStr[j];
			k++;
		}
	}
	for(i=pos+len;i<strlen(srcStr);i++)
	{
		kkstr[k]=srcStr[i];
		k++;
	}
	printf("%s\n",kkstr);
}

void main()
{
	char srcStr[MAX_STR]={"Hello World!"};
	char replaceStr[MAX_STR]={"We12345"};
	str_replace(srcStr,replaceStr,3,5);	
}
//result: HelWe123rld! 
