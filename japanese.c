#include <stdio.h>
#include <string.h>

#define MAX_STR 256
#define length 80
#define width  40
#define radius 18

#if 0
void print(int zzstring[][length])
{
	int i,j;
	for(i=0;i<;i++)
	{
		for(j=0;j<length;j++)
		{
			printf("%d",zzstring[i][j]);
		}
		printf("\n");
	}
}
#endif

void old(int kkstring[MAX_STR][MAX_STR])
{
	int i,j;
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			kkstring[i][j]=0;				
			printf("%d",kkstring[i][j]);				
		}
		printf("\n");
	}
}


void border(int zzstring[MAX_STR][MAX_STR])
{
	int i,j;
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if(0==i || 0==j || (length-1)==i || (length-1)==j)
			{
				zzstring[i][j]=1;				
				printf("%d",zzstring[i][j]);				
			}
			else
			{					
				zzstring[i][j]=0;				
				printf("%d",zzstring[i][j]);				
			}			
		}
		printf("\n");
	}
}

#if 0
void border(int zzstring[MAX_STR][MAX_STR])
{
	int i;
	for(i=0;i<length;i++)
	{
		zzstring[0][i]=1;		
		zzstring[length-1][i]=1;
		zzstring[i][0]=1;
		zzstring[i][length-1]=1;
	}
}
#endif

void diagonal(int zzstring[MAX_STR][MAX_STR])
{
	int i,j;
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if((length-1)==i+j || i==j)
			{
				zzstring[i][j]=1;	
				printf("%d",zzstring[i][j]);				
			}
			else
			{
				zzstring[i][j]=0;
				printf("%d",zzstring[i][j]);				
			}
		}
		printf("\n");
		
	}
}

void circle(int zzstring[MAX_STR][MAX_STR])
{
	int i,j;	
	for(i=0;i<length;i++)
	{
		for(j=0;j<length;j++)
		{
			if((radius-1)*(radius-1)>=(length-i-1)*(length-i-1)+j*j)
			{
				zzstring[i][j]=1;
				printf("%d",zzstring[i][j]);				
			}
			else
			{
				zzstring[i][j]=0;
				printf("%d",zzstring[i][j]);				
			}
		}		
		printf("\n");
	}
}


void Japan(int zzstring[MAX_STR][MAX_STR])
{
	int i,j,a,b;
	for(i=0;i<width;i++)
	{
		for(j=0;j<length;j++)
		{
			a=i-width/2;
			b=j-length/2;
			if((i<(width/2+radius) && i>(width/2-radius)) && (j<(length/2+radius) && j>(length/2-radius)) && (radius*radius>=a*a+b*b))
			{
				zzstring[i][j]=1;
				printf("%d ",zzstring[i][j]);				
			}
			else
			{
				zzstring[i][j]=0;
				printf("%d ",zzstring[i][j]);				
			}
		}
		printf("\n");
	}		
	
}


void JapanX(int zzstring[MAX_STR][MAX_STR])
{
	int i,j,a,b;
	for(i=0;i<width;i++)
	{
		for(j=0;j<length;j++)
		{
			a=i-width/2;
			b=j-length/2;
			if((i<(width/2+radius) && i>(width/2-radius)) && (j<(length/2+radius) && j>(length/2-radius)) && (radius*radius>=a*a+b*b))
			{
			#if 0
				if()
				{
					
				}
				else()
				{
					
				}
				printf("  ");
			#endif
			
				printf("  ");				
			}
			else
			{
				zzstring[i][j]=0;
				printf("%d ",zzstring[i][j]);	
			}
		}
		printf("\n");
	}		
	
}




int main(void)
{
	int i,j;
	int kkstring[MAX_STR][MAX_STR]={0};	
	int zzstring[MAX_STR][MAX_STR]={0};	
	int jjstring[MAX_STR][MAX_STR]={0};
	printf("****old*****\n");
	old(kkstring);
	printf("***border***\n");
	border(zzstring);
	printf("**diagonal**\n");
	diagonal(zzstring);	
	printf("***circle***\n");
	circle(zzstring);
	printf("**Japan**\n");
	Japan(zzstring);
	printf("**JapanX**\n");
	JapanX(jjstring);

}
