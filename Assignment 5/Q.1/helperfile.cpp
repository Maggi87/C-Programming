/*
	1.Write a program which accept one number from user and return
	smallest digit.
*/
#include<stdio.h>
#include"myheader.h";

UINT MiniDigit(LONG iNo)
{
	UINT iDigit = 0, iMin = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iNo!=0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMin)
		{
			iMin = iDigit;
		}
		if(iMin == 0)
		{
			break;
		}
		iNo = iNo / 10;
	}
	return iMin;
}
