#include<stdio.h>
#include"myheader.h";
void ArrReverce(int *arr, int iSize)
{
	int i=0;

	if((arr==NULL)||(iSize<=0))
	{
		return;
	}
	
	for(i=iSize-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	
}

/*
void Display(int *arr,int iSize)
{
	int iCnt = 0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d \t",arr[iCnt]);
	}
}
*/