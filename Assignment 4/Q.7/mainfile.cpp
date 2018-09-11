/*
	7. Accept one numbers from user and count digits which are
	greater than 5.
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

	printf("Number of greater than 5 is %d\n",iRet);

	return 0 ;
}