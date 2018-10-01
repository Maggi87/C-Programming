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
BOOL ChkSpecial(char ch)
{
		if(ch == NULL)
		{
			return FALSE;
		}
		if((ch>=33)&&(ch<=47))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
}
	