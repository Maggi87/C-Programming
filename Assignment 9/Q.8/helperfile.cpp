#include<stdio.h>
#include"myheader.h";
BOOL ArrayCompare( int *arr, int iSize1, int *brr, int iSize2)
{
	int i = 0;
	if(iSize1 != iSize2)
	{
		return FALSE;
	}
	
	for(i=0;i<iSize1;i++)
	{
		if(arr[i] != brr[i])
		{
			break;
		}
	}
	if(i < iSize1)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
}

/*
void Display(BOOL iRet)
{
	
}*/
