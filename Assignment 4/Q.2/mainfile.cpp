/*
	2. Write a program which accept one number from user and
	return addition of its even digits.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	LONG iRet = 0;
	UINT iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet = EvenDigit(iValue);

	printf("Addition of number is %d",iRet);

	return 0 ;
}