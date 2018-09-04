//2. Write a program which accept number from user and print even factors of that number.

#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo;

	printf("Enter the number");
	scanf("%d", &iNo);

	PrintEven(iNo);

	return 0;
}
