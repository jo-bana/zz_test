#include <stdio.h>
#include <string.h>

#define MAX_STRING 256

//分割字符串，用空格分割
void strblock(char *srcStr,char desStr[MAX_STRING][MAX_STRING],char block)
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
}
//多个空格，删除后只留一个空格
void delAdd(char *srcStr,char block)
{
	int a,b=0;
	int len;	
	len=strlen(srcStr);
	for(a=0;a<=len;a++)
	{
		if(block==srcStr[a]&&block==srcStr[a+1])
		{
			continue;
		}
		srcStr[b]=srcStr[a];
		b++;
	}
}


void main()
{
	char zzString[]={"I am Chinese! I feel pround!"};
	char aaString[]={"I       am      Chinese!      I      feel      pround!"};
	char minString[MAX_STRING][MAX_STRING]={0};
	int i;
	printf("whole string:%s\n",zzString);
	strblock(zzString,minString,' ');
	for(i=0;i<MAX_STRING;i++)
	{
		if(0 == strlen(minString[i]))
		{
			break;
		}	
		printf("block [%d]:%s\n",i,minString[i]);
	}	
	printf("block [%d]:%s\n",i,minString[i]);
	delAdd(aaString,' ');
	printf("new string:%s\n",aaString);
}
