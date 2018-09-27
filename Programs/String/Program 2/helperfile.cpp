#include<stdio.h>
#include"myheader.h";
void ReverseDisplay(char *str)
{
	int iCnt = 0;

	if(str == NULL)
	{
		return;
	}
	
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	str--;
	while(iCnt>0)
	{
		printf("%c",*str);
		str--;
		iCnt--;
	}	
}