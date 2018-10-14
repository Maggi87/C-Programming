/*  
    Accept no. from user and return largest digit
    input:  751      787     
    output: 7        8          
    
*/
#include"myheader.h"
UINT MaxDigit(LONG iValue)
{
	UINT iDigit = 0, iMax = 0;

	if(iValue<0)
	{
		iValue = -iValue;
	}

	while(iValue!=0)
	{
		iDigit = iValue % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		if(iMax == 9)
		{
			break;
		}
		iValue = iValue / 10;
	}

	return iMax;
	
}