#include<stdio.h>
#include"myheader.h";
UINT RentCalulate(UINT iKilometer)
{
	
	UINT iCnt = 0, jCnt = 0, iAns1 = 0,iAns2 = 0, iKilometer1 = 0;

	for(iCnt = 1; iCnt <= iKilometer; iCnt++)
	{
		if(iCnt <= 120)
		{
			iAns1 = iCnt * 15;	
		}
	
	}

	iKilometer1  = iKilometer - 120;
	if(iKilometer1 < 0)
	{
		iKilometer1 = -iKilometer1;
	}

	for(jCnt = 1; jCnt<=iKilometer1; jCnt++)
	{
		iAns2 = jCnt * 10;	
	}

	
	return iAns1 + iAns2;

}