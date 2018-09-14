/*
	2. Accept number from user and print below pattern. 
*/
#include<stdio.h>
#include"myheader.h";

int main()
{
	int iValue = 0;

	printf("Enter the value");
	scanf("%d",iValue);

	pattern(iValue);

	return 0 ;
}