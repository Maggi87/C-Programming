/*
	10. Accept number from user and return its generic root.
	Input : 7429
	Output : 4 (7+4+2+9 -> 22 -> 2+2 -> 4 )
	Input : 90281
	Output : 2 (9+0+2+8+1 -> 20 -> 2+0 -> 2)
	int GenRoot (int iNo)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
int GenRoot(int iNo)
{
	int iDigit = 0, iSum = 0, gSum = 0;

	if(iNo<=0)
	{
		return -1;
	}

	while(iNo!=0)
	{
	
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;		
	}

	iDigit = 0;
	while(iSum!=0)
	{
		iDigit = iSum % 10;
		gSum = gSum + iDigit;
		iSum = iSum / 10;	
	}

	return gSum;
}