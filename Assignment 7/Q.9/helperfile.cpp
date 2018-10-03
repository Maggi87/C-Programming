/*
	9. Write a program which accept range from user and display all
	prime numbers between that range.
	Input : 5 20
	Output : 5 7 11 13 17 19
	void PrimeRange(int iStart, int iEnd)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
void PrimeRange(int iStart, int iEnd)
{
	int iCnt = 0, j = 0;

	if(iStart>iEnd)
	{
		return;
	}

	for(iCnt = iStart; iCnt<=iEnd; iCnt++)
	{
		for(j=2;j<=iCnt;j++)
		{
			
			if((iCnt % j)==0)
			{
				break;
			}			
		}
		if(iCnt == j)
		{
			printf("%d\t",j);
		}
	}
}