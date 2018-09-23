#include<stdio.h>
#include"myheader.h";
BOOL ChkSorted( int *arr, int iSize1)
{
	int i = 0,iSort=0;
	if((arr==NULL)||(iSize1<=0))
	{
		return FALSE;
	}
	
	for(i = 0; i<iSize1-1; i++)
	{
		if(arr[i]<arr[i+1])
		{
			return TRUE;
			
		}
		else
		{
			return FALSE;
		}
		
	}

	
}


void Display(BOOL iRet)
{
	if(iRet == TRUE)
	{
		printf("Array is Sorted");
	}
	else
	{
		printf("Array is not Sorted");
	}
}
