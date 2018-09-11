/*
	3. Write a program which accept one number from user and
	return the occurrence of digit 5.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	LONG iRet = 0;
	UINT iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet = DigitX(iValue);

	printf("Occurrence of digit 5 is %d\n",iRet);

	return 0 ;
}