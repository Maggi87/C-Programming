/*
	6. Accept range from user and perform addition of all elements
	form that range.
	Input : 10 15
	Output : 75
	UINT SumRange (int iStart, int iEnd)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
UINT SumRange(int iStart, int iEnd)
{
	int iCnt = 0, j = 0, iSum = 0;

	if(iStart>iEnd)
	{
		return -1;
	}

	for(iCnt = iStart; iCnt<=iEnd; iCnt++)
	{
		iSum = iSum + iCnt;				
	}
	return iSum;
}