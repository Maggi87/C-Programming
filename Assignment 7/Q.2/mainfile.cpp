/*
	2. Write a program which accept number from user and check
whether that number is strong number or not. When the sum of
the factorial of a number's individual digits are equal to the
number itself, then that number is called a strong number.
Input : 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	int iNo = 0;
	BOOL iRet = 0;

	printf("Enter the Number");
	scanf("%d",&iNo);
	
	iRet = ChkStrong(iNo);

	if(iRet == TRUE)
	{
		printf("%d is strong ",iNo);
	}
	else
	{
		printf("%d is Not strong",iNo);
	}
		
	return 0;
}