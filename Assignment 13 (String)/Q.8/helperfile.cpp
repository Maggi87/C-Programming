/*
	8. Write a program which 2 strings from user and check whether
	first N contents of two strings are equal or not. (Implement
	strcmp() function).
	Note : If third parameter is greater than the size of second string
	then concat whole string after first string.
	Input : “Marvellous Infosystems”
	“Marvellous Logic Building”
	10
	Output : TRUE
*/

#include<stdio.h>
#include"myheader.h";
BOOL StrNCmpX(char *src,char *dest,int iNo)
{
	int iCnt = 0;
	if((NULL == src)||(NULL == dest))
	{
		return -1;
	}

	while((*src!='\0')&&(*dest!='\0')&&(iNo!=0))
	{
		if(*src==*dest)
		{
			src++;
			dest++;
			iNo--;
		}
		else
		{
			break;
		}
		
	}
	if((*src==*dest))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}

