
#include<stdio.h>
#include"myheader.h";
int frequency(int *arr,int iSize,int iNo)
{
	int i = 0, iSum = 0,iFrequency=0;
	
	if((arr==NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<=iSize;i++)
	{
		if(arr[i]==iNo)
		{
			iFrequency++;
		}
	}	

	return iFrequency;
}