
#include<stdio.h>
#include"myheader.h";
void Display(int *arr,int iSize)
{
	int i = 0, j = 0;

	if((arr==NULL)||(iSize<=0))
	{
		return;
	}

	for(i=0;i<=iSize;i++)
	{
		for(j=1;j<=arr[i];j++)
		{
			if((arr[i]%2)==0)
			{
				printf("*");
			}
			else
			{
				printf("&");
			}
		}
		printf("\n");
	}	
}