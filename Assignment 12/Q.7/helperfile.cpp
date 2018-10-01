/*
	7. Accept two characters from user and swap its contents if both
	the characters are small or both the characters are capital. In
	other cases keep the contents as it is.
	Input : K L
	Output : L K

	Input : K o
	Output : K o
	Input : u g
	Output : g u
	Input : * h
	Output : * h 
*/
#include<stdio.h>
#include"myheader.h";
void SwapX(char *p, char *q)
{
	
	char temp;

	if(((*p>='A')&&(*p<='Z'))&&((*q>='A')&&(*q<='Z')))
	{
		temp = *p;
		*p = *q;
		*q = temp;		
	}
	
	if(((*p>='a')&&(*p<='z'))&&(*q>'a')&&(*q<='z'))
	{
		temp = *p;
		*p = *q;
		*q = temp;
	}
}
	