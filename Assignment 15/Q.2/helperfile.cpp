/*
	2. Write a program which accept input from user and display below
	pattern.

	Input : 7

	Output : A b C d E f G h
*/
#include<stdio.h>
#include"myheader.h";
void pattern(int no)
{
	int i = 0;

	if(no<0)
	{
		no = -no;
	}

	char a;
	a = 97;
	for(i=1;i<=no;i++)
	{
		if((i%2)==0)
		{
			a = a + 32;
			printf("%c \t",a);
		}
		if((i%2)!=0)
		{
			a = a - 32;
			printf("%c \t",a);
		}		
		a++;
	}
}
