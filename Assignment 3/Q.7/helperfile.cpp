#include"myheader.h"
#include<stdio.h>

void DisplayRange(int iStart, int iEnd)
{
	int iCnt = 0;
	
	for(iCnt = iStart; iCnt<=iEnd; iCnt++)
	{
		printf("%d",iCnt);
	}
}
