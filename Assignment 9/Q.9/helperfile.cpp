#include<stdio.h>
#include"myheader.h";
int ArrayDiff( int *arr, int iSize1, int *brr, int iSize2)
{
	int iSum1 = 0, iSum2 = 0, i = 0;
	if(iSize1 != iSize2)
	{
		return -2;
	}
	
	for(i = 0; i<iSize1; i++)
	{
		iSum1 = iSum1 + arr[i];
	}

	for(i = 0; i<iSize2; i++)
	{
		iSum2 = iSum2 + brr[i];
	}
	return (iSum1 - iSum2);
}


void Display(int iRet)
{
	printf("Summention of two array %d",iRet);
}
