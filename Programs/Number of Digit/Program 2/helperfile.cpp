/*  
    Accept no. from user and c return summention of digit of that number 
    input: 157
    output:  13
*/
#include"myheader.h"
UINT SumDigit(int iValue)
{
	UINT iSum = 0,iDigit = 0;

	if(iValue<0)
	{
		iValue = -iValue;
	}

	while(iValue!=0)
	{
		iDigit = iValue % 10;
		iSum = iSum + iDigit;
		iValue = iValue / 10;
	}

	return iSum;

}