//1.Write a program which accept one number from user and print that number of even numbers on screen.

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
