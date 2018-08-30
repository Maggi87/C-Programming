#include"myheader.h"
#include<stdio.h>

BOOL ChkDivisible(int iNo)
{
	if((iNo % 5) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}