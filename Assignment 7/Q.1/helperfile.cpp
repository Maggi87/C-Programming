/*
	10. Write a program which accept one number from user addition
	of factorial of each digit of that number.
*/
#include<stdio.h>
#include"myheader.h";

LONG Power(int iValue1, int iValue2)
{
	int iAns = 1;

	while(iValue2!=0)
	{
		iAns = iAns * iValue1;
		iValue2 --;
	}

	return iAns;
}


