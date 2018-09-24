#include<stdio.h>
#include"myheader.h";
void SumArray( int *arr, int iSize1)
{
	int i = 0,temp=0, iDigit = 0,iSum;
	if((arr==NULL)||(iSize1<=0))
	{
		return;
	}
	
	for(i=0;i<iSize1;i++)
	{
		iSum = 0;
		temp = arr[i];
		while(temp!=0)
		{
			iDigit = temp % 10;
			iSum = iSum + iDigit;
			temp = temp / 10;			
		}		 

		printf("%d\t",iSum);
	}		
}