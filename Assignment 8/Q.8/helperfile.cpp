/*
	8. Write a program which accept 5 numbers from user and return
	largest number from them.
	Input : 7 0 -29 27 11
	Output : 27
	int Maximum(int *Arr, int iSize)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
int Maximum(int *arr,int iSize)
{
	int i = 0, iMax = 0;
	if((NULL == arr)||(iSize<=0))
	{
		return -1;
	}

	iMax = arr[i];
	for(i = 0; i<iSize; i++)
	{
		if(arr[i]>iMax)
		{
			iMax = arr[i];
		}
	}

	return iMax;
}