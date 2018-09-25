#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int *ArrayConcate(int *arr,int iSize,int *brr,int jSize)
{
	int i=0,j=0,k=0,cSize=0;
	int *crr = NULL;

	cSize = iSize+jSize;
	crr = (int *)calloc(cSize,sizeof(int));

	for(i=0;i<iSize;i++)
	{
		crr[i] = arr[i];
	}
	for(j=0;j<jSize;j++)
	{
		crr[j] = brr[j];
	}
	return crr;
}

void Display(int *arr,int cSize)
{
	int i = 0;
	
}