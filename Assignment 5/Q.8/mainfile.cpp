/*
8. Cost of land is 560 rupees per square feet. Accept number of
square feet from user and calculate total cost. 

*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	LONG iValue = 0;
	UINT lRet = 0;


	printf("Enter the no. of squarefeet");
	scanf_s("%ld",&iValue);

	lRet = Estimate(iValue);

	printf("Total Cost of square feet is %d",lRet);

	return 0;
}