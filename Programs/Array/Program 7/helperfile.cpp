
#include<stdio.h>
#include"myheader.h";
int AdditionArray(int *arr,int iSize)
{
	int i = 0, iSum = 0;
	
	if((arr==NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<=iSize;i++)
	{
		iSum = iSum + arr[i];
	
	}	

	return iSum;
}