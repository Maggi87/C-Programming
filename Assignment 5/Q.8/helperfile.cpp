/*
	8. Cost of land is 560 rupees per square feet. Accept number of
square feet from user and calculate total cost. 
*/

#include<stdio.h>
#include"myheader.h";

LONG Estimate(LONG iNo)
{
	UINT totalcost = 0;

	totalcost = iNo * 560;

	return totalcost;	
}


