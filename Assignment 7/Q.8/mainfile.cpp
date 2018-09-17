/*
	8. Accept one character from user and depends on that character
display its type. 
*/

#include<stdio.h>
#include"myheader.h"
int main()
{
	char ch;

	printf("Enter the character");
	scanf("%c",&ch);
		
	Display(ch);

	return 0;
}