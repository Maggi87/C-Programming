/*
	2. Write a program which accept number from user and check
whether that number is strong number or not. When the sum of
the factorial of a number's individual digits are equal to the
number itself, then that number is called a strong number.
Input : 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145
*/
#include<stdio.h>
#include"myheader.h";

BOOL ChkStrong(int iNo)
{
	int iFact, iSum = 0, iDigit = 0, iTemp = 0, iCnt = 0;

	iTemp = iNo;

	while(iNo!=0)
	{
		iDigit = iNo % 10;
		iFact = 1;
		for(iCnt=1;iCnt<=iDigit;iCnt++)
		{
			iFact = iFact * iCnt;
		}

		iSum = iSum + iFact;
	
		iNo = iNo / 10;
	}
	
	if(iSum == iTemp)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}


