/*
	4. Write a program which accept string from user and copy small
	characters of that string into another string.

	Input : “Marvellous multi OS”

	Output : “arvellous multi”
*/

#include<stdio.h>
#include"myheader.h";
void StrCatX(char *src, char *dest)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}

	while(*dest!='\0')
	{
		dest++;
	}

	while(*src!='\0')
	{	
		*dest = *src;
		dest++;
		src++;	
	}
	*dest='\0';
}

