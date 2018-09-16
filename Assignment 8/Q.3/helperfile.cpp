#include<stdio.h>
#include"myheader.h";
int addition(int *arr,int iSize)
{
	int iSum = 0, iCnt = 0;
	
	if((arr == NULL) || (iSize<=0))
	{
		return 0;
	}

	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if((iCnt % 2)==0)
		{ 
			iSum = iSum + arr[iCnt];
		}
	}

	return iSum;


}