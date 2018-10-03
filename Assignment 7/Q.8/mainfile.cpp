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
int main()
{
	char ch;

	printf("Enter the Character");
	scanf("%c",&ch);
	
	Display(ch);
	return 0;
}