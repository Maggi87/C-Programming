/*  
    Accept no. from user as well as one digit from user and check whether that digit is occurse in your number or not 
    input: 157 7
    output:  TRUE
*/
#include"myheader.h"
int main()
{
	UINT iNo = 0;
	LONG iValue = 0;
	BOOL iRet = TRUE;

	printf("\nEnter the Number\n");
	scanf("%ld",&iValue);

	printf("\nEnter the Digit\n");
	scanf("%d",&iNo);

	iRet = ChkDigit(iValue,iNo);

	if(iRet == TRUE)
	{
		printf("\nNumber is occured");
	}
	else 
	{
		printf("\nNumber not occured");
	}
	return 0;
}
