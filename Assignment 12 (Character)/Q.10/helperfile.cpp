/*
	10. Accept character from user and display its ASCII value in
	decimal, octal and hexadecimal format.

	Input  : A
	Output : Decimal 65
	         Octal 0101
	         Hexadecimal 0X41
*/
#include<stdio.h>
#include"myheader.h";
void Display (char ch)
{
	printf("%d \t %o \t %X",ch,ch,ch);
}
	