/*  
    Accept no. from user and return largest digit
    input:  751      787     
    output: 7        8      
    
*/
#include"myheader.h"
int main()
{
	LONG iNo = 0;
	UINT iRet = 0;

	printf("Enter the number\n");
	scanf("%ld",&iNo);

	iRet = MaxDigit(iNo);

	printf("Max Digit is %d",iRet);
	
	return 0;
}