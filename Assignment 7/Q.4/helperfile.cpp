/*
	4. Accept number from user and check whether it is Armstrong
	number or not. Armstrong number is a number that is the sum of
	its own digits each raised to the power of the number of digits is
	same as the given number. 
	Input : 153 
*/
#include<stdio.h>
#include"myheader.h";

BOOL ChkArmstrong(int iNo)
{
	int iSum = 0, iDigit = 0, iTemp = 0, iCnt = 0;

	iTemp = iNo;

	while(iNo!=0)
	{
		iDigit = iNo % 10;
		iSum = iSum + (iDigit * iDigit * iDigit);
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


