/*
	8. Accept three numbers from user and return difference between
	largest and smallest digit.
*/
#include<stdio.h>
#include"myheader.h";

UINT DigitDiff(LONG iNo) 
{
	UINT iDigit = 0, iMax = 0, iMin = 0;
	while(iNo!=0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
	    if(iDigit < iMin)
		{
			iMin = iDigit;
		}
			
		iNo = iNo / 10;
	}
	printf("%d %d",iMax,iMin);
	return (iMax - iMin);
}


