#include<stdio.h>
#include"myheader.h";
void DisplayEven(int *arr,int iSize)
{
	int iMax = 0, iCnt = 0;
		
	if((arr == NULL) || (iSize<=0))
	{
		return;
	}

	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{ 
			printf("%d",arr[iCnt]);
		}
	}
}