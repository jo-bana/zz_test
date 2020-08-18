#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

void main(void)
{
	int i=0,j=0;
	int b[MAX_SIZE]={0};
	int tmp;
	printf("please input a integer: ");
	scanf("%d",&tmp);

	if(tmp>0)
	{
		//大于0时
		while(tmp/10>0)
		{
			b[j]=tmp%10;		
			tmp/=10;
			j++;
			printf("%d",b[j-1]);	
		}
		b[j]=tmp%10;
		printf("%d",b[j]);
		printf("\n");
	}
	else
	{			
		//小于0时	
		for(b[j]=tmp%10,printf("%d",b[j]),tmp/=10;tmp/10<0;)
		{	
			j++;		
			b[j]=tmp%10*(-1);		
			tmp/=10;
			printf("%d",b[j]);
				
		}
		b[j]=tmp%10*(-1);
		printf("%d",b[j]);
		printf("\n");
	}
	
}



