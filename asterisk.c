// ɾ���ַ�������Ǻ�
#include <stdio.h>
#define MAX_STR 256 

//����ǰ���Ǻţ������Ǻ�ȫ��ɾ��
void front_asterisk(char *a)
{
	int i;
	char *p=a;

	while(*p&&*p=='*')
	{
		a[i]=*p;
		p++;i++;
	}
	while(*p)
	{
		if(*p!='*')
		{
			a[i]=*p;
			i++;
			p++;
		}
	}
	a[i]='\0';
}

void center_asterisk(char *a,char *h,char *p)
{
	
}

void rear_asterisk(char *a)
{
	
}

void main(void)//����������
{
	char kkstr1[MAX_STR]={"***kiki1*do*you*love*me***"};
	char kkstr2[MAX_STR]={"***kiki2*do*you*love*me***"};
	char kkstr3[MAX_STR]={"***kiki3*do*you*love*me***"};
	
	front_asterisk(kkstr1);
	puts(kkstr1);

	//center_asterisk(kkstr2);
	puts(kkstr2);

	rear_asterisk(kkstr3);
	puts(kkstr3);
}
