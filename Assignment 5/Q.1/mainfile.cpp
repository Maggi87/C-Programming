/*
	1.Write a program which accept one number from user and return
	smallest digit.
*/
#include<stdio.h>
#include"myheader.h";

int main()
{
	UINT iRet = 0;
    LONG iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet = MiniDigit(iValue);

	printf("The min value is %d\n",iRet);

	return 0 ;
}