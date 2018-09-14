/*
	3. Write a program which accept number from user and print
below pattern as. 
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	int iValue = 0;

	printf("Enter the number");
	scanf("%d",&iValue);

	pattern(iValue);

	return 0;
}