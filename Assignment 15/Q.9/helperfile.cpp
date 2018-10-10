/*
	9. Write a program which accept two inputs from user and display below
	pattern.

	Input : 4 4

	Output :
	*
	* *
	* * *
	* * * *
*/
#include<stdio.h>
#include"myheader.h";
void pattern(int iRow,int iCol)
{
	int i = 0, j = 0;

	for(i=iRow;i>=1;i--)
	{
		printf("\n");
		for(j=iCol;j>=i;j--)
		{
			printf("*");
		}
	}
}
