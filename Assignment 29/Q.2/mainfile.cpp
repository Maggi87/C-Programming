#include"myheader.h"
/*  
	2. Write a program which accept N numbers from user and return addition of that
	numbers using recursive approach.
	Input : 7 9 8 7 3 5
	Output : 39
*/

int main()
{
	int arr[] = {7,9,8,7,3,5};
	int iRet = AddR(arr,6);
	printf("%d",iRet);
	return 0;
}