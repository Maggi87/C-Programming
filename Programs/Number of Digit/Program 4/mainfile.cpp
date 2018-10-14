/*  
    Accept no. from user and return reverse number
    input: 157
    output:  751
*/
#include"myheader.h"
int main()
{
	//UINT iNo = 0;
	LONG iValue = 0;
	LONG iRet = 0;

	printf("\nEnter the Number\n");
	scanf("%ld",&iValue);	

	iRet = Reverse(iValue);

	printf("Reverse no is %ld",iRet);
	
	return 0;
}