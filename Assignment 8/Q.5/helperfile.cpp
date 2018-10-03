/*
	5. Write a program which accept 8 numbers from user and print
	prime numbers from them.
	Input : 7 45 29 31 91 28 71 11
	Output : 7 29 31 71 11
	void PrintPrime(int *Arr, int iSize)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
void PrintPrime(int *arr,int iSize)
{
	int temp = 0, i = 0, iDigit = 0, iRev = 0, j = 0;
	if((NULL == arr)||(iSize<=0))
	{
		return;
	}

	for(i = 0; i<iSize; i++)
	{
		for(j = 2; j<arr[i];j++)		 
		{
			if((arr[i]%j)==0)
			{
				break;
			}
		}
		if(arr[i] == j)
		{
			printf("%d",arr[i]);
		}
	}
}