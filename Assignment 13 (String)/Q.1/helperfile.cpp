/*
	1.Write a program which accept string from user and copy the
	contents of that string into another string. (Implement strcpy()
	function)

	Input : “Marvellous Multi OS”
	Output : “Marvellous Multi OS” in another string

	void StrCpyX(char *src, char *dest)
	{
		
	}
*/

#include<stdio.h>
#include"myheader.h";
void StrCpyX(char *src, char *dest)
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
}