/*  
    Accept no. from user and count number of digit from that number
    input: 157
    output:  3
*/
#include"myheader.h"
UINT CountDigit(int iValue)
{
	UINT iCnt = 0;

	if(iValue<0)
	{
		iValue = -iValue;
	}

	while(iValue!=0)
	{
		iValue = iValue / 10;
		iCnt++;
	}

	return iCnt;

}