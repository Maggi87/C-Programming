/*
	7. Write a program which accept two inputs from user and display below
	pattern.

	Input : 4 5

	Output :
	$ $ $ $ $
	# # # # #
	$ $ $ $ $
	# # # # #
*/
#include<stdio.h>
#include"myheader.h";
void pattern(int iRow,int iCol)
{
	int i = 0, j = 0;

	for(i=1;i<=iRow;i++)
	{
		printf("\n");
		for(j=1;j<=iCol;j++)
		{
			if((i%2)!=0)		
			{
				printf("$ \t");
			}
			else 
			{
				printf("# \t");
			}
		}
	}
}
