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
int main()
{
	int iStart = 0;
	int iEnd = 0;

	printf("Enter the Two Number");
	scanf("%d %d",&iStart,&iEnd);

	PrimeRange(iStart,iEnd);
	return 0;
}