/*
	6. Write a program which 2 strings from user and concat N
	characters of second string after first string.Value of N should be
	accepted from user. (Implement strncat() function).
	Note : If third parameter is greater than the size of second string
	then concat whole string after first string.

	Input : “Marvellous Infosystems”
	“Logic Building”
	5

	Output : “Marvellous Infosystems Logic”
*/

#include<stdio.h>
#include"myheader.h";
void StrCatX(char *src, char *dest,int iNo)
{
	int iCnt = 0;
	if((NULL == src)||(NULL == dest))
	{
		return;
	}

	while(*dest!='\0')
	{
		dest++;
		iCnt++;
	}

	if(iCnt>iNo)
	{
		while((*src!='\0')&&(iNo!=0))
		{	
			*dest = *src;
			dest++;
			src++;	
			iNo--;
		}
		*dest='\0';
	}	
}

