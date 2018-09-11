/*
	10. Write a program which accept one number from user and
	return difference between addition of its even digits and addition
	of odd digits.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	LONG iRet = 0;
	UINT iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet = DiffDigit(iValue);

	printf("Addition of Odd Digit is %d\n",iRet);

	return 0 ;
}