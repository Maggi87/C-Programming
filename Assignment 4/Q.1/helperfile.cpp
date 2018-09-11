/*
	1.Write a program which accept one number from user and return
	multiplication of its digits. (If number contains 0 then ignore that 0)
*/

#include<stdio.h>
#include"myheader.h";

UINT MultiDigit(LONG iNo)
{
	UINT lDigit = 0, Multi = 1;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	

	while(iNo!=0)
	{
		lDigit = iNo % 10;
		if(lDigit == 0)
		{
			lDigit = lDigit + 1;
		}
		Multi = Multi * lDigit;
		iNo = iNo / 10;
	}

	return Multi;
}
