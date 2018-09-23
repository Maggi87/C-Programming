#include<stdio.h>
#include"myheader.h";
void SumDigit(int *arr, int iSize)
{
	int iSum = 0, i = 0, temp = 0, iDigit = 0;

	if((arr==NULL)||(iSize<=0))
	{
		return;
	}
	
	for(i = 0;i < iSize; i++)
	{
		temp = arr[i];
		while(temp != 0)
		{
			iDigit = temp % 10 ;
			iSum = iSum + iDigit;
			temp = temp / 10;
		}
		printf("%d \t",iSum);
		iSum = 0;
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