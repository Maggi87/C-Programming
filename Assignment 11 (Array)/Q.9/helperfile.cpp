#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int ArrayCapital(char *arr, int iSize)
{
	int i = 0,cCounter=0,sCounter=0;

	if((arr == NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<iSize;i++)
	{
		if((arr[i]>=65)&&(arr[i]<=90))
		{
			cCounter++;
		}
		else if((arr[i]>=97)&&(arr[i]<=121))
		{
			sCounter++;
		}
	}

	return cCounter-sCounter;
}

void Display(int iRet)
{
	printf("%d",iRet);	
}