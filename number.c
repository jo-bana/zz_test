#include <stdio.h>
#define MAX_SIZE 256
void main(void)
{
	int i,j,num=0;
	int a[MAX_SIZE]={0,1,2,3};
	int b[MAX_SIZE]={1,10,100,1000};
	int c[MAX_SIZE]={0};
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{	
			{
				c[num]=a[i]*b[j]+a[(i+1)%4]*b[(j+1)%4]+a[(i+2)%4]*b[(j+2)%4]+a[(i+3)%4]*b[(j+3)%4];	
				printf("num:%d\n",c[num]);
				num++;				
			}
		}
	}
}
//num=a[i]*b[j]+a[(i+1)%4]*b[(j+1)%4]+a[(i+2)%4]*b[(j+2)%4]+a[(i+3)%4]*b[(j+3)%4];	
//num=tmp1*1000+a[(i+1)%4]*c[(j)%4]+a[(i+2)%4]*c[(j+1)%4]+a[(i+3)%4]*c[(j+2)%4];


