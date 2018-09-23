#include<stdio.h>
#include"myheader.h";
int MaxDigit(int *arr, int iSize)
{
	int i = 0, temp = 0, iDigit = 0, iMax = 0, iMaxDigit = 0;
	int brr[10] = {0};

	if((arr==NULL)||(iSize<=0)||(brr==NULL))
	{
		return -2;
	}
	
	for(i = 0;i<iSize;i++)
	{
		temp = arr[i];
		while(temp != 0)
		{
			iDigit = temp % 10 ;
			brr[iDigit]++;
			temp = temp / 10;
		}
	
	}

	for(i = 0;i< 10; i++)
	{
		if(brr[i] > iMax)
		{
			iMax = brr[i] ;
			iMaxDigit = i;
		}
	}

	return iMax;
	
}


void Display(int iRet)
{
	printf("%d \t",iRet);
}
