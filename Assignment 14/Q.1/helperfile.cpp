/*
	1.Write a program which accept string from user count number of
	words from string

	Input : “Marvellous Multi OS”

	Output : 3
*/
#include<stdio.h>
#include"myheader.h";
int WordCount(char *str)
{
	int iCnt = 0;

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
			iCnt++;
			while((*str!=' ')&&(*str!='\0'))
			{
				str++;
			}
		}
	}

	return iCnt;
}