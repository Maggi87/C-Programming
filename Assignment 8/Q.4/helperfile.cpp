#include<stdio.h>
#include"myheader.h";
void DisplayFloat(float *arr,int iSize)
{
	int iCnt = 0;
	if((arr == NULL) || (iSize<=0))
	{
		return;
	}

	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(arr[iCnt] > 8.9)
		{
			printf("%f\n",arr[iCnt]);
		}
	}
}