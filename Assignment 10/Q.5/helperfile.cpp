#include<stdio.h>
#include"myheader.h";
void SumArray(int *arr,int aSize,int *brr,int bSize)
{
	int i = 0, aSum=0, bSum=0;

	if((arr==NULL)||(aSize<=0)||(brr==NULL)||(bSize<=0))
	{
		return;
	}

	for(i=0;i<aSize;i++)
	{
		aSum = aSum + arr[i];
	}
	printf("\n");
	for(i=0;i<bSize;i++)
	{
		bSum = bSum + brr[i];
	}

	printf("Summention of bott arrat are %d %d",aSum,bSum);
}