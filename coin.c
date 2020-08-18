#include <stdio.h>

//fivecent=(money*10-onecent*1-twocent*2)/5;
//if((fivecent<=2&&fivecent>=0)&&(twocent<=5&&twocent>=0))

void main(void)
{
	int onecent=0,twocent=0,fivecent=0;
	int money;
	printf("please input money(yuan)!\n");
	scanf("%d",&money);
	for(onecent=money*100;onecent>=0;onecent--)
	{		
		if(0==onecent%2)
		{
			twocent++;
			onecent=money*100-twocent*1-fivecent*5;
		}
		else if(0==onecent%5)
		{
			fivecent++;
			onecent=money*100-twocent*2-fivecent*5;
		}
		if(money*100==onecent*1+twocent*2+fivecent*5 && onecent>=0 && twocent>=0 && fivecent>=0)
		{
			printf("onecent:%d twocent:%d fivecent:%d\n",onecent,twocent,fivecent);
		}
	}
}

