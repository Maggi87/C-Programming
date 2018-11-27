#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int Search(char *arr, int iSize,char iCh)
{
	int i = 0, iFreqency=0;

	if((arr == NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<iSize;i++)
	{
		if(arr[i]==iCh)
		{
			iFreqency++;
		}
	}
	return iFreqency;
}

void Display(int iRet)
{
	printf("%d",iRet);
}