/*
	6. Accept one numbers from user and count occurrence of 0.
*/

#include<stdio.h>
#include"myheader.h";


UINT DigitX(LONG iNo)
{
	UINT lDigit = 0, iCounter = 0;;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	
/*
	while(iNo!=0)
	{
		lDigit = iNo % 10;
		if(lDigit == 0)
		{
			iCounter++;
		}
		
		iNo = iNo / 10;
	}

	*/
	return iCounter;
}
