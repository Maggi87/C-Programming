#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int ArrayCapital(char *arr, int iSize)
{
	int i = 0,iCounter=0;

	if((arr == NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<iSize;i++)
	{
		if((arr[i]>=65)&&(arr[i]<=90))
		{
			iCounter++;
		}

	}

	return iCounter;
}

void Display(int iRet)
{
	printf("%d",iRet);	
}