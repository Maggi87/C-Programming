#include<stdio.h>
#include"myheader.h";
void Pattern(int iStart, int iEnd)
{
	int iCnt = 0;
	for(iCnt=iStart; iCnt<=iEnd; iCnt++)
	{
		if((iCnt % 2)==0)
		{
			printf("%d",iCnt);
		}
	}	
}