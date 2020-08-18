#include <stdio.h>
#include <string.h>

#define MAX_STRING 255
//用取余做更简单
void encryption(unsigned char kkstring[MAX_STRING],int SecretKey)
	{
			int i,dif;
			dif=('Z'-'A');
			for(i=0;i<strlen(kkstring);i++)
				{
				if((kkstring[i]<='Z'&&kkstring[i]>='A')||(kkstring[i]<='z'&&kkstring[i]>='a'))
					{
						kkstring[i]=kkstring[i]+SecretKey;
						if((kkstring[i]<='Z'&&kkstring[i]>='A')||(kkstring[i]<='z'&&kkstring[i]>='a'))
						{}
						else
						{
							if((kkstring[i]>'z')||(kkstring[i]<'a'&&kkstring[i]>'Z'))
								{
									kkstring[i]=kkstring[i]-dif;
								}
						}
					}				

				}
		
	}

void decode(unsigned char kkstring[MAX_STRING],int SecretKey)
	{
				int i,dif;
				dif=('Z'-'A');
				for(i=0;i<strlen(kkstring);i++)
					{
					if((kkstring[i]<='Z'&&kkstring[i]>='A')||(kkstring[i]<='z'&&kkstring[i]>='a'))
						{
							kkstring[i]=kkstring[i]-SecretKey;
							if((kkstring[i]<='Z'&&kkstring[i]>='A')||(kkstring[i]<='z'&&kkstring[i]>='a'))
							{}
							else
							{
								if((kkstring[i]>'Z')||(kkstring[i]<'a'&&kkstring[i]>'Z'))
									{
										kkstring[i]=kkstring[i]+dif;
									}				
							}
						}				
	
					}
			
	}

void encryptionTable(unsigned char kkstring[MAX_STRING],unsigned int passwordTable[MAX_STRING])
{
	int i,len;	
	len=sizeof(passwordTable);
	for(i=0;i<strlen(kkstring);i++)
		{					
			kkstring[i]=((kkstring[i]+passwordTable[i%len])%MAX_STRING);			
		}
}

int main(void)
{
	int x=0,y=0;
	//unsigned char kkstring[]={"We are students!"};	
	unsigned char kkstring[]={"Ab Cd Ef Gh Ij Kl Mn!"};
	unsigned int passwordTable[]={0,-1,0,-1,0,-1,0,-1,0,-1};
	printf("the initial string is %s\n",kkstring);
	L1:
	printf("please input secret kkstring!\n");
	scanf("%d",&x);
	if((x<26)&&(x>=0))
	{		
		encryption(kkstring,x);
		printf("the encrypted string is %s\n",kkstring);
	}
	else
	{
		printf("please input integer between 1~25\n");
		goto L1;
	}
	printf("************************************\n");
	L2:
	printf("please input decode kkstring!\n");
	scanf("%d",&y);
	if((y<26)&&(y>=0))
	{		
		decode(kkstring,y);
		printf("the encrypted string is %s\n",kkstring);
	}
	else
	{
		printf("please input integer between 1~25\n");
		goto L2;
	}		
	encryptionTable(kkstring,passwordTable);
	printf("************************************\n");
	printf("the encryptedTable string is %s\n",kkstring);
	return 0;
}
	
