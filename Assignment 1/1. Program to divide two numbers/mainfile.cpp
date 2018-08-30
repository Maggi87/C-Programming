#include"myheader.h"
#include<stdio.h>
int main(int argc, char *argv[])
{
	double iNo1 = 0, iNo2 = 0, iRet = 0;

	printf("Enter the two Number");
	scanf("%d", &iNo1);
	scanf("%d", &iNo2);

	iRet = Divide(iNo1,iNo2);

	if(iRet == ERR_DIVIDE_BY_ZERO)
	{
		printf("ERROR : -Divide by Zero");
	}
	else
	{
		printf("Divide is :-",iRet);
	}

	

	return 0;


}