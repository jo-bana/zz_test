//Çó sn=1+1/2!+1/3!+1/4!+...+1/n! µÄÖµ

#include <stdio.h>


float factorial(int n)
{
	float sn=0.0,an=1.0;
	int i;
	for(i=1;i<=n;i++)
	{
		an*=i;	
		sn+=1/an;
	}
	printf("%f\n",sn);
	return sn;
}

#if 0
double factorial(int n)
{
	double t,sn=0.0;
	int i,j;
	for(i=1;i<=n;i++)
	{
		t=1.0;
		for(j=1;j<=i;j++)
		{
			t*=j;
		}
		sn+=1.0/t;		
	}
	printf("%f\n",sn);
	return sn;
}
#endif

void main(void)
{
	int x;
	printf("please input a number:");
	scanf("%d",&x);
	factorial(x);
}
