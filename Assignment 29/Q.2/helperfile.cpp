#include"myheader.h"
/*  
	2. Write a program which accept N numbers from user and return addition of that
	numbers using recursive approach.
	Input : 7 9 8 7 3 5
	Output : 39
*/

int AddR(int *arr,int iSize)
{
	static int iCnt = 0;
	static int iSum = 0;

	if(iCnt<iSize)
	{
		iSum = iSum + arr[iCnt];
		iCnt++;
		AddR(arr,iSize);

	}
	return iSum;
}
