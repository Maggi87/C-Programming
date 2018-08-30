#include"myheader.h"
#include<stdio.h>
int main(int argc, char *argv[])
{
	int iNo = 0, iRet = 0;

	printf("Enter the Number");
	scanf("%d",&iNo);

	iRet = sub(iNo);

	printf("Substraction is %d:- ",iRet);
	return 0;


}