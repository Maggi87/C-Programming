#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int *CopyArray(int *arr,int aSize)
{
	int i = 0;
	int *crr = NULL;


	crr = (int *)calloc(aSize,sizeof(int));
	

	if((arr==NULL)||(aSize<=0))
	{
		return 0;
	}

	for(i=0;i<aSize;i++)
	{
		crr[i] = arr[i];
	}
	

	return crr;
}

void Display(int *iRet,int aSize)
{
	int i = 0;
	
	for(i=0;i<aSize;i++)
	{
		printf("%d",iRet[i]);
	}
}