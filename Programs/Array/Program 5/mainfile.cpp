#include<stdio.h>
#include"myheader.h";
int main()
{
	int iCnt = 0, brr[10]={0},iSize = 0, iNo = 0, iRet = 0;

	printf("Enter the size of array");
	scanf("%d",&iSize);

	printf("Enter the search element");
	scanf("%d",&iNo);

	printf("Enter the array element");
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&brr[iCnt]);
	}

	iRet = DisplayLast(brr,iSize,iNo);

	if(iRet == -2)
	{
		printf("Invalid Out Put");
	}
	if(iRet == -1)
	{
		printf("There is no element");
	}
	else
	{
		printf("Element found at position %d",iRet);
	}

	return 0;

}