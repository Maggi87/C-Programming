/*
	4. Accept number from user and check whether it is Armstrong
	number or not. Armstrong number is a number that is the sum of
	its own digits each raised to the power of the number of digits is
	same as the given number.
	Input : 153 
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	int iNo = 0;
	BOOL iRet = 0;

	printf("Enter the Number");
	scanf("%d",&iNo);
	
	iRet = ChkArmstrong(iNo);

	if(iRet == TRUE)
	{
		printf("%d is Armstrong ",iNo);
	}
	else
	{
		printf("%d is Not Armstrong",iNo);
	}
		
	return 0;
}