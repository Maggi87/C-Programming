#include<stdio.h>
#include"myheader.h";
void Pattern( int *arr, int iSize1)
{
	int i = 0,j=0;
	if((arr==NULL)||(iSize1<=0))
	{
		return;
	}
	
	for(i=0;i<iSize1;i++)
	{
		for(j=1;j<=arr[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}	
	

}