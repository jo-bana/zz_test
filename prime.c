#include <stdio.h>
#include <math.h>

/*输出1到100之间的所有素数*/
/*output all the 1~100 prime number*/
void main(void)
{
	int i,j;
	int isprime=1;
	for(i=2;i<100;i++)
	{
		for(j=2;j<=i/2;j++)
		{
		 	isprime=1;
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d\n",i);
		}
	}
}

//这个比较简单，不多做介绍，唯一注意的一点是for循环截止条件是i<sqrt(n),因为对于一个整数n，其是否为素数，在所有小于其平方根的数已经判断完毕，没必要再增加工作量判断到n-1；

/*
int main()
{
	int n;
	int i;
	int flag=0;
	for(n=2;n<=100;n++)
	{
		flag=0;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				{
					flag=1;
					break;
				}
		}
		if(flag==0)
			printf("%d ",n);
	}
 
	return 0;
}
*/

