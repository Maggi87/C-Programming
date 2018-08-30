#include"myheader.h"
#include<stdio.h>
int main(int argc, char *argv[])
{
	int iValue = 0;
	int bRet = 0;

	printf("Enter the numner");
	scanf("%d",&iValue);

	bRet = ChkDivisible(iValue);

	if(bRet == TRUE)
	{
		printf("Number is divisible by 5");
	}
	else
	{
		printf("Nummber is not divisible by 5");
	}

	return 0;
}