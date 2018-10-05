/*
	2. Write a program which accept string from user and copy the
	contents of that string into another string. (Implement strncpy() function)

	Input : “Marvellous Multi OS”
	10

	Output : “Marvellous
*/

#include<stdio.h>
#include"myheader.h";
void StrNCpyX(char *src, char *dest,int iNo)
{
	if((NULL == src)||(NULL == dest))
	{
		return;
	}

	while((*src!='\0')&&(iNo!=0))
	{
		 *dest = *src;
		 dest++;
		 src++;		
		 iNo--;
	}
}

