/*
	2. Accept Character from user and check whether it is capital or
	not (A-Z).
	Input : F
	Output : TRUE
	Input : d
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

	iRet = ChkCapital(ch);

	if(iRet == TRUE)
	{
		printf("Character is Capital",iRet);
	}
	else
	{
		printf("Character is not Capital");
	}
}