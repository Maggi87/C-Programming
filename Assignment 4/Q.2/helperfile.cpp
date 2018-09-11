/*
	2. Write a program which accept one number from user and
	return addition of its even digits.
*/

#include<stdio.h>
#include"myheader.h";

UINT EvenDigit(LONG iNo)
{
	UINT lDigit = 0, sEven = 0;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	

	while(iNo!=0)
	{
		lDigit = iNo % 10;
		if((lDigit % 2) == 0)
		{
			sEven = sEven + lDigit;
		}
		
		iNo = iNo / 10;
	}

	return sEven;
}
