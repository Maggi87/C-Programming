/*
	7. Write a program which accept 5 numbers from user and print
	addition of digits of each number.
	Input : 7 45 2991 90 27
	Output : 7 9 21 9 9

	void PrintSumDigit(int *Arr, int iSize)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
void PrintSumDigit(int *arr,int iSize)
{
	int temp = 0, i = 0, iDigit = 0, iSum = 0;
	if((NULL == arr)||(iSize<=0))
	{
		return;
	}

	for(i = 0; i<iSize; i++)
	{
		iSum = 0;
		temp = arr[i];
		while(temp!=0)
		{
			iDigit = temp % 10;
			iSum = iSum + iDigit;
			temp = temp / 10;
		}
		printf("%d \t",iSum);
	}
}