#include<stdio.h>
#include"myheader.h";
int EvenOddDiff(int *arr, int iSize)
{
	int i=0, iEvenSum = 0, iOddSum = 0;;

	if((arr==NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<iSize;i++)
	{
		if( ((arr[i]%2)==0))
		{
			iEvenSum = iEvenSum + arr[i];
		}
		else
		if((arr[i]%2)!=0)
		{
			iOddSum = iOddSum + arr[i];
		}
		 
	}
	return (iEvenSum - iOddSum);
}

void Display(int iRet)
{
	printf("%d",iRet);
	
}