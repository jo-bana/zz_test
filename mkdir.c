#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR 256

void LearnDir(char a[])
{
	strcpy(a,"mkdir -ps /tmp/learn");
	system(a);
}
#if 0
void OneHundreDir(char a[])
{

}

void Student1Dir(char a[])
{

}

void HardLink(char a[])
{

}

void SoftLink(char a[])
{

}
#endif
void main()
{
	system("rm -rf /tmp/learn");
	char a[MAX_STR]={0};
//LearnDir
	memset(a,0,MAX_STR);
	strcpy(a,"mkdir -p /tmp/learn");
	system(a);
	printf("the dir had created!\n");
		
//*********************************************************	
//OneHundreDir
	int i;
	for(i=1;i<=100;i++)
	{
		memset(a,0,MAX_STR);
		sprintf(a,"mkdir -p /tmp/learn/the%ddoc",i);
		system(a);
	}
	printf("the 1~100 dir had created!\n");
//*********************************************************	
//Student1Dir
	memset(a,0,MAX_STR);
	sprintf(a,"touch /tmp/learn/the1doc/student1");
	system(a);		
	printf("the student had created!\n");
//SoftLink
	memset(a,0,MAX_STR);
	sprintf(a,"ln -s /tmp/learn/the1doc/student1 /tmp/learn/the2doc");
	system(a);
	printf("the softlink had created!\n");
//HardLink
	memset(a,0,MAX_STR);
	sprintf(a,"/tmp/learn/the1doc/student1 ln /tmp/learn/the3doc");
	system(a);
	printf("the hardlink had created!\n");
}

