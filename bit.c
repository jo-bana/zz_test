/*����ʮ����ת�����ƺ�������������ж��ٸ�1������1�ĸ��� ����255 ����8*/
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

//��λ������ÿ��"��"���������Ƚ�
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
