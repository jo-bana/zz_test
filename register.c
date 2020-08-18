#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

#define BIT0 	0<<0
#define BIT1	0<<1
#define BIT2	0<<2
#define BIT3	0<<3
#define BIT4	0<<4
#define BIT5	0<<5
#define BIT6	0<<6
#define BIT7	0<<7

unsigned int countStr(char *srt)
{
	unsigned int aa=0;
	int i;
	int nCount=0,cpCount=0,csCount=0,otCount=0;
	for(i=0;srt[i]!='\0';i++)
	{
		if(srt[i]<='Z'&&srt[i]>='A')
		{
			cpCount++;	
		}
		else if(srt[i]<='z'&&srt[i]>='a')
		{
			csCount++;	
		}
		else if(srt[i]<='9'&&srt[i]>='0')
		{
			nCount++;
		}
		else 
		{
			otCount++;
		}
	}
	aa=aa|(csCount<<25)|(cpCount<<20)|(nCount<<8)|(otCount);
	return aa;
}


#if 0
int main(void)
{
	register unsigned int a=0x00000000;
	int i,cap=0,cas=0,num=0,sym=0;
	char str[MAX_SIZE]={0};
	char kk[]={"Hello World!  11111"};
	int len=strlen(kk);
	for(i=0;i<len;i++)
	{
		if(kk[i]<='Z'&&kk[i]>='A')
		{
			cap++;	
		}
		else if(kk[i]<='z'&&kk[i]>='a')
		{
			cas++;	
		}
		else if(kk[i]<='9'&&kk[i]>='0')
		{
			num++;
		}
		else 
		{
			sym++;
		}
		
	}
	printf("cap:%d cas:%d num:%d sym:%d\n",cap,cas,num,sym);
	
	
	//printf("The result is:%x\n",a);
	printf("The result is:%0x%0x%0x%0x\n",cap,cas,num,sym);
	//printf("The result is:%0x%0x%0x%0x\n",a);

}

#endif


void main()
{
	char str[MAX_SIZE]={0};
	unsigned int reg=0;
	printf("please input a string!\n");
	gets(str);
	reg=countStr(str);
	printf("reg:%x\n",reg);
}
