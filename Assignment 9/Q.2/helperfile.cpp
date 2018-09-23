#include<stdio.h>
#include"myheader.h";
void EvenOddReplace(int *arr, int iSize)
{
	int i=0;

	if((arr==NULL)||(iSize<=0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		if( ((arr[i]%2)==0))
		{
			arr[i] = 0;
		}
		else
		if((arr[i]%2)!=0)
		{
			arr[i] = 1;
		}
		 
	}
}

void Display(int *arr,int iSize)
{
	int iCnt = 0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d \t",arr[iCnt]);
	}
}