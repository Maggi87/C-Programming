﻿/*
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
#include"myheader.h"
int main()
{
	int arr[10] = {0};
	int iSize = 0;
	int i = 0;

	printf("Enter the Size of Array");
	scanf("%d",&iSize);

	printf("Enter element of array");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	PrintPrime(arr,iSize);

	return 0;
}
