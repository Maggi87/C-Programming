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
BOOL ChkSmall(char ch)
{
		if(ch == NULL)
		{
			return FALSE;
		}
		if((ch>='a')&&(ch<='z'))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
}
	