﻿/*
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
int main()
{
	int iNo1 = 0, iNo2 = 0;
	
	printf("Enter the two Number");
	scanf("%d %d",&iNo1,&iNo2);

	pattern(iNo1,iNo2);
	return 0;
}