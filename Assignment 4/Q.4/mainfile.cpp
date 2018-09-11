/*
	4. Accept one numbers from user and display the output as.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	int iRet = 0;
	int iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	DisplayNo(iValue);

	printf("\nAddition of Odd Digit is %d\n",iRet);

	return 0 ;
}