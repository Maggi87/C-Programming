/*
	9. Write a program which accept 5 numbers from user and return
	smallest number from them.
	Input : 7 0 -29 27 11
	Output : -29
	int Minimum(int *Arr, int iSize)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
int Minimum(int *arr,int iSize)
{
	int i = 0, iMin = 0;
	if((NULL == arr)||(iSize<=0))
	{
		return -1;
	}

	iMin = arr[i];
	for(i = 0; i<iSize; i++)
	{
		if(arr[i]<iMin)
		{
			iMin = arr[i];
		}
	}
	return iMin;
}