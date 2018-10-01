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
BOOL ChkCapital(char ch)
{
		if(ch == NULL)
		{
			return FALSE;
		}
		if((ch>='A')&&(ch<='Z'))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
}
	