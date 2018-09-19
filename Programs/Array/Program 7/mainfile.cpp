#include<stdio.h>
#include"myheader.h";
int main()
{
	int iCnt = 0, brr[10]={0},iSize = 0, iRet = 0, iNo = 0;

	printf("Enter the size of array");
	scanf("%d",&iSize);

	printf("Enter the number");
	scanf("%d",&iNo);

	printf("Enter the array element");
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&brr[iCnt]);
	}

	iRet = frequency(brr,iSize,iNo);

	if(iRet == -2)
	{
		printf("Invalid Input");
	}

	printf("Element of frequency is %d",iRet);
	return 0;
}