/*
	6. Write a program which displays ASCII table. Table contains
	symbol, Decimal, Hexadecimal and Octal representation of every
	member from 0 to 255. 
*/
#include<stdio.h>
#include"myheader.h";
void  DisplayASCII() 
{
	int i = 0;
	for(i=0;i<256;i++)
	{
		printf("%d \t %c \t%x \t %o \n%",i,i,i,i);
	}
}
	