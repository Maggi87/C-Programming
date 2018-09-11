/*
	1.Write a program which accept one number from user and return
	multiplication of its digits. (If number contains 0 then ignore that 0)
*/
#include<stdio.h>
#include"myheader.h";

int main()
{
	LONG iRet = 0;
	UINT iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet = MultiDigit(iValue);

	printf("Multiplication of number %d",iRet);

	return 0 ;
}