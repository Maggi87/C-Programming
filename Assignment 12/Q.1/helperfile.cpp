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
BOOL ChkAlpha(char ch)
{
		if(ch == NULL)
		{
			return FALSE;
		}
		if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
}
	