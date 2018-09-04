#include<myheader.h>
#include<stdio.h>

int SumRange(int iStart, int iEnd)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = iStart; iCnt<=iEnd; iCnt++)
	{
		iSum = iSum + iCnt;	
	}

	return iSum;
}
