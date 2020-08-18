#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256
void main()
{
	char str[MAX_SIZE]={0};
	int i,num=0;
	printf("please input mode number:");
	gets(str);
	if(strlen(str)!=3)
	{
		printf("you input error number!\n");
		return;
	}
	char result[]="---------";
	int j=0;
	for(i=0;i<3;i++)
	{
		num=str[i]-'0';
		if(num<0&&num>7)
		{
			printf("you input error number!\n");
			return;
		}
		if(num&4)
		{
			result[j]='r';
		}
		j++;
		if(num&2)
		{
			result[j]='w';
		}
		j++;
		if(num&1)
		{
			result[j]='x';
		}
		j++;
	}
	printf("%s",result);
#if 0	
	for(i=0;i<3;i++)
	{
		num=str[i]-'0';
		if(num<0&&num>7)
		{
			printf("you input error number!\n");
			return;
		}
		if(num&4)
		{
			printf("r");
		}
		else
		{
			printf("-");
		}
		if(num&2)
		{
			printf("w");
		}
		else
		{
			printf("-");
		}
		if(num&1)
		{
			printf("x");
		}
		else
		{
			printf("-");
		}
	}
#endif
#if 0
	for(i=0;i<3;i++)
	{
		if(str[i]=='0')
		{
			printf("---");
		}
		else if(str[i]=='1')
		{
			printf("--x");
		}
		else if(str[i]=='2')
		{
			printf("-w-");
		}
		else if(str[i]=='3')
		{
			printf("-wx");
		}
		else if(str[i]=='4')
		{
			printf("r--");
		}
		else if(str[i]=='5')
		{
			printf("r-x");
		}
		else if(str[i]=='6')
		{
			printf("rw-");
		}
		else if(str[i]=='7')
		{
			printf("rwx");
		}
		else
		{
			printf("you input error number!\n");
			return;
		}
	}
#endif
	printf("\n");
}

