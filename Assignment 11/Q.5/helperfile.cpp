#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
void Percentage(float mark[], int iSize)
{
	int i = 0;

	if((mark == NULL)||(iSize<=0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		if(mark[i]<35)
		{
			printf("Fail %f\n",mark[i]);
		}
		else if((mark[i]>35)&&(mark[i]<50))
		{
			printf("Pass class %f\n",mark[i]);
		}
		else if((mark[i]>=50)&&(mark[i]<60))
		{
			printf("Second class %f\n",mark[i]);
		}
		else if((mark[i]>=60)&&(mark[i]<70))
		{
			printf("First class %f\n",mark[i]);
		}
		else
		{
			printf("First class with Distinction %f",mark[i]);
		}
	}
	
}
