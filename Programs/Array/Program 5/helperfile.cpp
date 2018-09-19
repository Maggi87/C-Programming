
#include<stdio.h>
#include"myheader.h";
int DisplayLast(int *arr,int iSize,int iNo)
{
	int i = 0, j = 0, iPos = -1;
	
	if((arr==NULL)||(iSize<=0))
	{
		return -2;
	}

	for(i=0;i<=iSize;i++)
	{
		if(arr[i]==iNo)
		{
			iPos = i;
		}
	}	

	return iPos;
}