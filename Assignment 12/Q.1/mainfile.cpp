/*
	1. Accept Character from user and check whether it is alphabet or
	not (A-Z a-z).
	Input : F
	Output : TRUE
	Input : &
	Output : FALSE
*/
#include<stdio.h>
#include"myheader.h";
int main()
{
	char ch;
	BOOL iRet = 0;

	printf("Enter the character\n");
	scanf("%c",&ch);

	iRet = ChkAlpha(ch);

	if(iRet == TRUE)
	{
		printf("Character is Alphabet",iRet);
	}
	else
	{
		printf("Character is not Alphabet");
	}
}