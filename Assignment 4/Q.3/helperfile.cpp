/*
	3. Write a program which accept one number from user and
	return the occurrence of digit 5.
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
	

	while(iNo!=0)
	{
		lDigit = iNo % 10;
		if(lDigit == 5)
		{
			iCounter++;
		}
		
		iNo = iNo / 10;
	}

	return iCounter;
}
