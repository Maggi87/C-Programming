#include"myheader.h"
#include<stdio.h>

int Factorial(int iValue)
{
	
	int iAns = 1;
	int i = 1;

	while(i<=iValue)
	{
		iAns = iAns * i;
		i++;
	}

	
	return iAns;
}