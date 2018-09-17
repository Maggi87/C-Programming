/*
	8. Accept three numbers from user and return difference between
	largest and smallest digit.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	UINT iNo = 0;
	LONG iRet = 0;

	printf("Enter the Number");
	scanf("%d",&iNo);
	
	iRet = DigitDiff(iNo);

	printf("Difference between Largest and Smallest Digit %d\n",iRet);
	
	return 0;
}