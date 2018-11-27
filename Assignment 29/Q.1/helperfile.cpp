#include"myheader.h"
/*  
	1. Write a program which accept number from user and return number of digits from
	that number using recursive approach.
	Input  : 1121
	Output : 4
*/

int CountR(int iNo)
{
	static int iCnt = 0;
	if(iNo!=0)
	{
		iCnt++;
		iNo = iNo / 10;
		CountR(iNo);
	}
	return iCnt;
}