#include<stdio.h>
#include"myheader.h";
UINT ParkingCalculate(UINT iHrs)
{
	
	UINT iCnt = 0, jCnt = 0, iAns1 = 0,iAns2 = 0, iHrs1 = 0;

	for(iCnt = 1; iCnt <= iHrs; iCnt++)
	{
		if(iCnt <= 3)
		{
			iAns1 = 30;	
		}
	
	}

	iHrs1  = iHrs - 3;
	if(iHrs1 < 0)
	{
		iHrs1 = -iHrs1;
	}

	for(jCnt = 1; jCnt<=iHrs1; jCnt++)
	{
		iAns2 = iHrs1 * 5;	
		
	}

	
	return iAns1 + iAns2;

}