#include <stdio.h>
#include <string.h>

#define MAX_STR 256

void compact(char kkstring[MAX_STR])
{
	char zzstring[MAX_STR]={0};
	char p[MAX_STR]={0};
	int i=0,j,k=0,m;
	int len;
	char faker;
	len=strlen(kkstring);
	for(j=0;j<len;j++)
	{		
		if((kkstring[j]<='Z'&&kkstring[j]>='A')||(kkstring[j]<='z'&&kkstring[j]>='a'))
		{
			zzstring[i]=kkstring[j];
			i++;
		}
		else
		{
			p[k]=kkstring[j];
			k++;
		#if 0
			faker=kkstring[j];
			for(m=j;m<len;m++)
			{
				if(faker==kkstring[m])
				{
					p[k]=kkstring[m];
					k++;					
				}
				break;
			}
		#endif
		}
	}	
	//printf("The p[] string is %s\n",p);
	//printf("The zzstring is %s\n",zzstring);
	strcpy(kkstring,zzstring);
	strcat(kkstring,p);
}

int main(void)
{
	char kkstring[MAX_STR]={"a**b**c**d  e  !!We Will Succeed!!"};	
	printf("The old string is %s\n",kkstring);
	compact(kkstring);
	printf("The new string is %s\n",kkstring);
}
