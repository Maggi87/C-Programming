#include<stdio.h>
#include"myheader.h";
UINT CalculateMin(UINT iHrs)
{
	UINT iMin = 1;

	iMin = 60 * iHrs;

	return iMin;
}