/*
	4. Write a program which accept string from user and copy small
	characters of that string into another string.

	Input : “Marvellous multi OS”

	Output : “arvellous multi”
*/

#include<stdio.h>
#include"myheader.h";
void StrCpySmall(char *src, char *dest)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}

	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			 *dest = *src;
			  dest++;			 	
		}
		src++;	
	}
}

