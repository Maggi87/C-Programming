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
	PrintSumDigit(arr,iSize);

	return 0;
}
