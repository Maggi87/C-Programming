/*
	8. Accept one character from user and depends on that character
	display its type.
	Input : A
	Output : It is Capital
	Input : d
	Output : It is Small
	Input : 5
	Output : It is Digit
	void Display(char ch)
	{
	// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
void Display(char ch)
{
	if(NULL == ch)
	{
		return;
	}

	if((ch>='A')&&(ch<='Z'))
	{
		printf("It is Capital");
	}
	else if((ch>='a')&&(ch<='z'))
	{
		printf("It is Small");
	}
	else if((ch>=48)&&(ch<=58))
	{
		printf("It is Digit");
	}
	else
	{
		printf("Enter the Valid Character");
	}
}