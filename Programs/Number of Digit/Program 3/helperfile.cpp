/*  
    Accept no. from user as well as one digit from user and check whether that digit is occurse in your number or not 
    input: 157 7
    output:  TRUE
*/
#include"myheader.h"
BOOL ChkDigit(LONG iValue,UINT iNo)
{
	UINT iDigit = 0;

	if((iValue<0)||(iNo>9))
	{
		return FALSE;
	}
	if(iNo<0)
	{
		iNo = -iNo;
	}

	while(iValue!=0)
	{
		iDigit = iValue % 10;
		if(iDigit == iNo);
		{
			break;
		}
		iValue = iValue / 10;
	}
	if(iValue == 0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
