/*  
    Accept no. from user and c return summention of digit of that number 
    input: 157
    output:  13
*/
#include"myheader.h"
int main()
{
	UINT iValue = 0;
	LONG iRet = 0;

	printf("\nEnter the Number\n");
	scanf("%d",&iValue);

	iRet = SumDigit(iValue);

	printf("\nNumber of Summention %ld\t",iRet);

	return 0;
}