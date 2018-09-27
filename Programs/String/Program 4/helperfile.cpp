#include<stdio.h>
#include"myheader.h";
int frequency(char *str,char ch)
{
	int iCnt = 0;
	char temp = ch;
	if((NULL == str)||('\0'==ch))
	{
		return -1;
	}
	
	while(*str!='\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}

	return iCnt;
}