#include<stdio.h>
#include"myheader.h";
void ReverseArray( int *arr, int iSize1)
{
	int i = 0,temp=0, iDigit, iRev;
	if((arr==NULL)||(iSize1<=0))
	{
		return;
	}
	
	for(i=0;i<iSize1;i++)
	{
		temp = arr[i];
		iDigit = 0, iRev = 0;
		while(temp!=0)
		{
			iDigit = temp % 10;
			iRev = iRev * 10 + iDigit;
			temp = temp / 10;
		}	
		printf("%d\t",iRev);
	}	
	
}