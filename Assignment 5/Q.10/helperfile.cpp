/*
	10. Write a program which accept length of three sides of triangle
	and check whether it is Pythagorean triple or not.
	Input : 3 4 5
	Output : TRUE
	Input : 9 2 8
	Output : FALSE
*/
#include<stdio.h>
#include"myheader.h";

BOOL CkhPythagorus(int iNo1, int iNo2, int iNo3) 
{
	int a = 0, b=0, c = 0;

	a = iNo1 * iNo1;
	b = iNo2 * iNo2;
	c = iNo3 * iNo3;

	if((a+b)==c)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}


