/*
	4. Accept Character from user and check whether it is small case
	or not (a-z).
	Input : g
	Output : TRUE
	Input : D
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

	iRet = ChkSmall(ch);

	if(iRet == TRUE)
	{
		printf("Character is Small",iRet);
	}
	else
	{
		printf("Character is not Small");
	}
}