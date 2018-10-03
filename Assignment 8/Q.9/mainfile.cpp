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
#include"myheader.h"
int main()
{
	int arr[10] = {0};
	int iSize = 0;
	int i = 0, iRet = 0;

	printf("Enter the Size of Array");
	scanf("%d",&iSize);

	printf("Enter element of array");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	if(iRet == -1)
	{
		printf("Invalid Input");
	}

	iRet = Minimum(arr,iSize);
	printf("Maximun Number is %d",iRet);
	return 0;
}
