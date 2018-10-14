/*  
    Accept no. from user and return even reverse number
    input: 7912      482     7254 
    output:  0       284     42       
    
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

	printf("Even reverse no is %ld",iRet);
	
	return 0;
}