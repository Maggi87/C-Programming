/*
	4. Write a program which accept string from user and copy the
	contents into another string by removing all white spaces.

	Input : “Marvel lous multi OS”
	Output : “MarvellousmultiOS”
*/
#include<stdio.h>
#include"myheader.h";
void StrCpy(char *src,char *dest)
{
	while((NULL == src)&&(NULL == dest))
	{
		return;
	}

	while(*src!='\0')
	{
		if(*src == ' ')
		{
			src++;
		}
		*dest = *src;
		src++;
		dest++;
	}
}