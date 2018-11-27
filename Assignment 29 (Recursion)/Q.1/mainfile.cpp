#include"myheader.h"
/*  
	1. Write a program which accept number from user and return number of digits from
	that number using recursive approach.
	Input : 1121
	Output : 4
*/

int main()
{
	int iRet = 0;
	iRet = CountR(1121);
	printf("%d",iRet);
	return 0;
}