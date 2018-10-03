/*
	10. Accept number from user and return its generic root.
	Input : 7429
	Output : 4 (7+4+2+9 -> 22 -> 2+2 -> 4 )
	Input : 90281
	Output : 2 (9+0+2+8+1 -> 20 -> 2+0 -> 2)
	int GenRoot (int iNo)
	{
		// Logic
	}
*/
#include<stdio.h>
#include"myheader.h";
int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter the Number");
	scanf("%d",&iNo);


	iRet = GenRoot(iNo);
	printf("Generic root is %d",iRet);

	return 0;
}