#include<stdio.h>
#include"myheader.h";
void PrintPrime(int *arr,int iSize)
{
	int iCnt = 0, jCnt = 0, iDigit = 0, iCounter = 0;

	if((arr == NULL) || (iSize<=0))
	{
		return;
	}

	for(iCnt = 0; iCnt < iSize+1; iCnt++)
	{
		iCounter = 0;
		for( jCnt = 2; jCnt < arr[iCnt]; jCnt++)
		{
			if((arr[iCnt] % jCnt) == 0)
			{
				iCounter = 1;
				break;
			}
		}
		if(iCounter == 0)
		{
			printf("%d\n",arr[iCnt]);
		}
	}	
}