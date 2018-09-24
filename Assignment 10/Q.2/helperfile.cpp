#include<stdio.h>
#include"myheader.h";
void DisplayEven(int *arr,int aSize,int *brr,int bSize)
{
	int i = 0;

	if((arr==NULL)||(aSize<=0)||(brr==NULL)||(bSize<=0))
	{
		return;
	}

	for(i=0;i<aSize;i++)
	{
		if((arr[i]%2)==0)
		{
			printf("%d\t",arr[i]);
		}
	}
	printf("\n");
	for(i=0;i<bSize;i++)
	{
		if((brr[i]%2)==0)
		{
			printf("%d\t",brr[i]);
		}
	}
}