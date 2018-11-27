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
BOOL ChkDigit(char ch)
{
		if(ch == NULL)
		{
			return FALSE;
		}
		if((ch>=48)&&(ch<=57))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
}
	