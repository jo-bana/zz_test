#include <stdio.h>
int main(void)
{
   int n=100,sum=0;
   for(;n>0;n--)
   {
   	sum=n+sum;
   }
   printf("sum=%d\n",sum);
	return 0;
 }
