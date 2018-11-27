/*
	9. Accept Character from user and check whether it is special
	symbol or not (!, @, #, $, %, ^, &, *).
	Input : %
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

	iRet = ChkSpecial(ch);

	if(iRet == TRUE)
	{
		printf("it is special symbol",iRet);
	}
	else
	{
		printf("it is not special symbol");
	}
}