#include<stdio.h>
#include"myheader.h";
void DisplayRevers(int *arr,int iSize)
{
	int iCnt = 0;
	if((arr == NULL) || (iSize<=0))
	{
		return;
	}

	for(iCnt = iSize;iCnt>=0;iCnt--)
	{
		printf("%d\n",arr[iCnt]);		
	}
}