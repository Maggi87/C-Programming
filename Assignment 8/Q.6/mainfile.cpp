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
	PrintDigCount(arr,iSize);

	return 0;
}
