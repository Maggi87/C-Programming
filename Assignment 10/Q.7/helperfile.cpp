#include<stdio.h>
#include"myheader.h";
void MinArray(int *arr,int aSize,int *brr,int bSize)
{
	int i = 0, aMin=0, bMin=0;

	if((arr==NULL)||(aSize<=0)||(brr==NULL)||(bSize<=0))
	{
		return;
	}

	aMin = arr[0];
	bMin = brr[0];

	for(i=0;i<aSize;i++)
	{
		if(arr[i]<aMin)
		{
			aMin = arr[i];
		}
	}
	printf("\n");
	for(i=0;i<bSize;i++)
	{
		if(brr[i]<bMin)
		{
			bMin = brr[i];
		}
	}

	printf("Minimim element  of bott arrat are %d %d",aMin,bMin);
}