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

	if((ch>='A')&&(ch<='Z'))
	{
		temp = ch + 32;
	}
	else if((ch>='a')||(ch<='z'))
	{
		temp = ch - 32;
	}

	while(*str!='\0')
	{
		if((*str == ch)||(*str == temp))
		{
			iCnt++;
		}
		str++;
	}

	return iCnt;
}