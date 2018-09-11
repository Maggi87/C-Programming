/*
	5. Accept one numbers from user and return its reverse number.
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	LONG iRet = 0;
	UINT iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	iRet = Reverse(iValue);

	printf("Occurrence of digit 5 is %d\n",iRet);

	return 0 ;
}