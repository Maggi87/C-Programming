/*
	3. Accept Character from user and check whether it is digit or not
	(0-9).
	Input : 7
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

	iRet = ChkDigit(ch);

	if(iRet == TRUE)
	{
		printf("it is digit",iRet);
	}
	else
	{
		printf("not digit");
	}
}