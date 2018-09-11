/*
	5. Accept one numbers from user and return its reverse number.
*/

#include<stdio.h>
#include"myheader.h";


UINT Reverse(LONG iNo)
{
	UINT iRem = 0, iRev = 0;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	

	while(iNo!=0)
	{
		iRem = iNo % 10;
		iRev = iRev * 10 + iRem;
		iNo = iNo / 10;
	}

	return iRev;
}
