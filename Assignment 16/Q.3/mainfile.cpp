/*
    3. Write a program which accept two inputs from user and display below
	pattern.
	Input : 4 4
	Output :
	1 1 1 1
	2 * * 2
	3 * * 3
	4 4 4 4 
*/
#include<stdio.h>
#include"myheader.h"

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the Row and Coloum\n");
	scanf("%d %d",&iValue1,&iValue2);

	pattern(iValue1,iValue2);

	return 0;
}