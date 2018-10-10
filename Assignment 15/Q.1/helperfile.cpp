/*
	1. Write a program which accept input from user and display below
	pattern.
	Input : 7

	Output : A B C D E F G H
*/
#include<stdio.h>
#include"myheader.h";
void pattern(int no)
{
	int i = 0;
	char a;
	a = 65;
	for(i=0;i<=no;i++)
	{
		printf("%c \t",a);
		a++;
	}
}
