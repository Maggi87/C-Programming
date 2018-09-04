//1.Write a program which accept one number from user and return its factorial.


#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo = 0;
	int iRet;

	printf("Enter the Number\n");
	scanf("%d",&iNo);

	iRet = Factorial(iNo);

	printf("Factorial No. is %d\n",iRet);

	return 0 ;
}
