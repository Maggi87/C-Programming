#include<stdio.h>
#include"myheader.h";
void Pattern(int iNo, char iChar)
{
	int iCnt = 0;
	for(iCnt=1; iCnt<=iNo; iCnt++)
	{
		printf("M");
	}
	printf("%c",iChar);
}