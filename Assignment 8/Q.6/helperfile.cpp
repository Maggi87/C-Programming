/*
	6. Write a program which accept 8 numbers from user and print
	number of digits of each number.
	Input : 7 45 2991 31 91 28711 9 90
	Output : 1 2 4 2 2 5 1 2
	void PrintDigCount(int *Arr, int iSize)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
void PrintDigCount(int *arr,int iSize)
{
	int temp = 0, i = 0, iDigit = 0, iCnt = 0;
	if((NULL == arr)||(iSize<=0))
	{
		return;
	}

	for(i = 0; i<iSize; i++)
	{
		iCnt = 0;
		temp = arr[i];
		while(temp!=0)
		{
			iDigit = temp % 10;
			iCnt++;
			temp = temp / 10;
		}
		printf("%d \t",iCnt);
	}
}