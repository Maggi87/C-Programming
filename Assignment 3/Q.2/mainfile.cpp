//2. Write a program which accept principle amount, time and create of interest from user and calculate simple intrest.

#include<stdio.h>
#include"myheader.h"
int main()
{
	int iPrinciple = 0;
	int iTime = 0;
	int iRate = 0;
	int iRet = 0;

	printf("Enter the principle ammount");
	scanf("%d", &iPrinciple);

	printf("Enter the principle Time");
	scanf("%d", &iTime);

	printf("Enter the principle Rate");
	scanf("%d", &iRate);

	iRet = SimpleIntrest(iPrinciple, iTime, iRate);

	printf("Simple interst is %d :-", iRet);	

	return 0 ;
}
