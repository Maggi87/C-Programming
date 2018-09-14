/*
	3. Write a program which accept number from user and print
below pattern as. 
*/
#include<stdio.h>
#include"myheader.h";

void pattern(int iNo)
{
	int i = 0, j = 0;

	for(i = 1; i<=iNo; i++)
	{
		if((i%2)!=0)
		{
			printf("*");
		}
		else
		{
			printf("$");
		}
	}

	for(j = 1; j<=iNo; j++)
	{
		if((j%2)!=0)
		{
			printf("*");
		}
		else
		{
			printf("$");
		}
	}

	
}


