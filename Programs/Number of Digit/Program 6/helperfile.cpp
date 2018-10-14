/*  
    Accept no. from user and check no is polydrom or not
    input:  11      787     
    output:  true   true     
    
*/
#include"myheader.h"
BOOL Reverse(LONG iValue)
{
	int iDigit = 0;
	LONG iRev = 0, temp = 0;

	if(iValue<0)
	{
		iValue = -iValue;
	}
	temp = iValue;
	while(iValue!=0)
	{
		iDigit = iValue % 10;
		iRev = iRev * 10 + iDigit;
		iValue = iValue / 10;
	}
	
	if(temp == iRev)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}