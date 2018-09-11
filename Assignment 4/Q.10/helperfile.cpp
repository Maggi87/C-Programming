/*
	10. Write a program which accept one number from user and
	return difference between addition of its even digits and addition
	of odd digits.
*/

#include<stdio.h>
#include"myheader.h";

UINT DiffDigit(LONG iNo)
{
	UINT lDigit = 0, sOdd = 0, sEven = 0;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	

	while(iNo!=0)
	{
		lDigit = iNo % 10;
		if((lDigit % 2)== 0)
		{
			sEven = sEven + lDigit;
		}
		else
		{
			sOdd = sOdd + lDigit;
		}
		
		iNo = iNo / 10;
	}

	return sEven - sOdd;
}
