#include<myheader.h>
#include<stdio.h>

void DisplayRangeRev(int iStart, int iEnd)
{
	int iCnt = 0;
	
	for(iCnt = iEnd; iCnt>=iStart; iCnt--)
	{
		printf("%d",iCnt);
	}
}
