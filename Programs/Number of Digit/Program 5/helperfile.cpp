/*  
    Accept no. from user and return even reverse number
    input: 7912      482     7254 
    output:  0       284     42       
    
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
		if((iDigit % 2) == 0)
		{
			iRev = iRev * 10 + iDigit;
		}
		iValue = iValue / 10;
	}
	
	return iRev;
}