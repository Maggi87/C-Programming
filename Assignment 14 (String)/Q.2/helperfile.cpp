/*
	2. Write a program which accept string from user and return
	length of largest word.

	Input : “Marvellous Multi OS Infosystems”

	Output : 11
*/
#include<stdio.h>
#include"myheader.h";
int WordCount(char *str)
{
	int iCnt = 0, iMax = 0;

	if(NULL == str)
	{
		return 0;
	}

	while(*str!='\0')
	{
		if(*str == ' ')
		{
			while((*str==' ')&&(*str!='\0'))
			{
				str++;
			}
		}
		else
		{
			iCnt = 0;
			while((*str!=' ')&&(*str!='\0'))
			{
				iCnt++;
				str++;
			}
			
			if(iCnt>iMax)
			{
				iMax = iCnt;
			}
		}
	}

	return iMax;
}