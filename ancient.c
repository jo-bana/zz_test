#include <stdio.h>

void main(void)
{
	int chicken=0,rabbit=0;
	int heard=0,feet=0;
	printf("please input heard and feet!\n");
	scanf("%d %d",&heard,&feet);
	for(chicken=heard;chicken>=0;chicken--)
	{			
		if(feet==chicken*2+(heard-chicken)*4)
		{	
			rabbit=heard-chicken;
			printf("chicken:%d rabbit:%d\n",chicken,rabbit);
		}
	}
}

