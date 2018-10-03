/*
	6. Accept range from user and perform addition of all elements
	form that range.
	Input : 10 15
	Output : 15
	UINT SumRange (int iStart, int iEnd)
	{
		// Logic
	}
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	int iStart = 0;
	int iEnd = 0;
	UINT iRet = 0;

	printf("Enter the Two Number");
	scanf("%d %d",&iStart,&iEnd);

	iRet = SumRange(iStart,iEnd);

	if(iRet == -1)
	{
		printf("iStart always less than iEnd");
	}

	printf("Additon of range is %d",iRet);
	return 0;
}