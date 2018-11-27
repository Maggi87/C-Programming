/*
	3. Write a program which accept string from user and copy capital
	characters of that string into another string.

	Input : “Marvellous Multi OS”

	Output : “MMOS”
*/

#include<stdio.h>
#include"myheader.h";
void StrCpyCap(char *src, char *dest)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}

	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
			 *dest = *src;
			  dest++;			 	
		}
		src++;	
	}
}

