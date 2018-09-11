/*
	6. Accept one numbers from user and count occurrence of 0.
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

	printf("Occurrence of digit 0 is %d\n",iRet);

	return 0 ;
}