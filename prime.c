#include <stdio.h>
#include <math.h>

/*���1��100֮�����������*/
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

//����Ƚϼ򵥣����������ܣ�Ψһע���һ����forѭ����ֹ������i<sqrt(n),��Ϊ����һ������n�����Ƿ�Ϊ������������С����ƽ���������Ѿ��ж���ϣ�û��Ҫ�����ӹ������жϵ�n-1��

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

