/*
	10. Write a program which accept one number from user addition
	of factorial of each digit of that number.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	int iNo1 = 0, iNo2 = 0;
	LONG iRet = 0;
	printf("Enter the two Number");
	scanf("%d %d",&iNo1, &iNo2);
	
	iRet = Power(iNo1,iNo2);

	printf("%d",iRet);
	
	return 0;
}