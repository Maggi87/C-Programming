#include<stdio.h>
#include"myheader.h";
void DisplayDivisible(int *arr, int iSize)
{
	int i=0, iEvenSum = 0, iOddSum = 0;;

	if((arr==NULL)||(iSize<=0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		if( ((arr[i]%5)==0))
		{
			printf("%d",arr[i]);
		}
		
		 
	}
	
}

/*void Display(int *arr,int iSize)
{
	int iCnt = 0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("%d \t",arr[iCnt]);
	}
}*/