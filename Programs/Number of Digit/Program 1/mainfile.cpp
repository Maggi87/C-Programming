/*  
    Accept no. from user and count number of digit from that number
    input: 157
    output:  3
*/
#include"myheader.h"
int main()
{
	UINT iValue = 0;
	LONG iRet = 0;

	printf("\nEnter the Number\n");
	scanf("%d",&iValue);

	iRet = CountDigit(iValue);

	printf("\nNumber of Digit %ld\t",iRet);

	return 0;
}