#include<stdio.h>
#include"myheader.h";
int addition(int *arr,int iSize)
{
	int iMax = 0, iCnt = 0;
	
	if((arr == NULL) || (iSize<=0))
	{
		return 0;
	}

	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if(arr[iCnt] > iMax)
		{ 
			iMax = arr[iCnt];
		}
	}

	return iMax;


}