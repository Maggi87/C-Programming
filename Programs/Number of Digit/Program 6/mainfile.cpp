/*  
    Accept no. from user and check no is polydrom or not
    input:  11      787     
    output:  true   true       
    
*/
#include"myheader.h"
int main()
{
	//UINT iNo = 0;
	LONG iValue = 0;
	BOOL iRet = TRUE;

	printf("\nEnter the Number\n");
	scanf("%ld",&iValue);	

	iRet = Reverse(iValue);
	if(iRet == TRUE)
	{
		printf("Number is Polydrom");
	}
	else
	{
		printf("Number not Polydrom");
	}
	
	return 0;
}