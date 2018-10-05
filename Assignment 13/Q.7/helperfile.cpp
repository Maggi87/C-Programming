/*
	7. Write a program which 2 strings from user and check whether
	contents of two strings are equal or not. (Implement strcmp()
	function).

	Input : “Marvellous Infosystems”
	“Marvellous Infosystems”
	Output : TRUE
*/

#include<stdio.h>
#include"myheader.h";
BOOL StrCmpX(char *src,char *dest)
{
	int iCnt = 0;
	if((NULL == src)||(NULL == dest))
	{
		return -1;
	}

	while((*src!='\0')&&(*dest!='\0'))
	{
		if(*src==*dest)
		{
			src++;
			dest++;
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

