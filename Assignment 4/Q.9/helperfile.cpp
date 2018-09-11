/*
	9. Write a program which accept one number from user and
	return addition of its odd digits.
*/


#include<stdio.h>
#include"myheader.h";


UINT OddDigit(LONG iNo)
{
	UINT lDigit = 0, sOdd = 0;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	

	while(iNo!=0)
	{
		lDigit = iNo % 10;
		if((lDigit % 2)!= 0)
		{
			sOdd = sOdd + lDigit;
		}
		
		iNo = iNo / 10;
	}

	return sOdd;
}
