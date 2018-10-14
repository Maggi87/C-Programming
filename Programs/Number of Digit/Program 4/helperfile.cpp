/*  
    Accept no. from user and return reverse number
    input: 157
    output:  751
*/
#include"myheader.h"
LONG Reverse(LONG iValue)
{
	int iDigit = 0;
	LONG iRev = 0;

	if(iValue<0)
	{
		iValue = -iValue;
	}
	
	while(iValue!=0)
	{
		iDigit = iValue % 10;
		iRev = iRev * 10 + iDigit;
		iValue = iValue / 10;
	}
	
	return iRev;
}