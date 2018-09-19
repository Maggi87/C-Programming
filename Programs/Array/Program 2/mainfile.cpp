#include<stdio.h>
#include"myheader.h";
int main()
{
	int iCnt = 0, brr[10]={0},iSize = 0;

	printf("Enter the size of array");
	scanf("%d",&iSize);

	printf("Enter the array element");
	for(iCnt = 0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&brr[iCnt]);
	}

	Display(brr,iSize);

	return 0;

}