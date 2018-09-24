#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int DiffArray(int *arr,int aSize,int *brr,int bSize)
{
	int i = 0, aSum = 0, bSum = 0;
	

	if((arr==NULL)||(aSize<=0)||(brr==NULL)||(bSize<=0))
	{
		return -2;
	}

	for(i=0;i<aSize;i++)
	{
		aSum = aSum + arr[i];
	}
	printf("\n");
	for(i=0;i<bSize;i++)
	{
		bSum = bSum + brr[i];
	}

	return (aSum - bSum);
}

void Display(int iRet)
{
	printf("Different between of array id %d",iRet);
}