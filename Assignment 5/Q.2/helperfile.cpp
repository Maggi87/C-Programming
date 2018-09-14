/*
	2. Accept number from user and print below pattern. 
*/

#include<stdio.h>
#include"myheader.h";

void pattern(int iNo)
{
	int i = 0, j = 0;

	for(i=1;i<=iNo;i++)
	{
		printf("*");
	}
	for(j=1;j<=iNo;j++)
	{
		printf("#");
	}
}