/*
	1. Write a program which accept input from user and display below
	pattern.
	Input : 7

	Output : A B C D E F G H
*/
#include<stdio.h>
#include"myheader.h";
int main()
{
	int iNo = 0;
	
	printf("Enter the First Number");
	scanf("%d",&iNo);

	pattern(iNo);
	return 0;
}