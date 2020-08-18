/*计算十进制转二进制后二进制数里面有多少个1，返回1的个数 输入255 返回8*/
#include <stdio.h>
#define N 2
int bits_count(unsigned char num)
{
/*
	int i,j=0;
	int x;
	while(num)
	{
		x=num%N;
		num/=N;
		if(x==1)
		{
		 	j++;
		}
	}
	return j;
*/

//按位操作，每次"与"操作，作比较
  int i;
  int count=0;
  for(i=0;i<8;i++)
  {
	if((num&(1<<i))==(1<<i))
	count++;
  }
  return count;

}

void main()
{
	unsigned char value=0;
	printf("please input a byte number:");
	scanf("%d",&value);
	printf("you input byte has %d 1!\n",bits_count(value));
}
