#include<stdio.h>
#include"myheader.h";
int main()
{
	
	UINT iRet = 0, iHrs = 0;

	printf("Enter Hourse");
	scanf("%d",&iHrs);

	iRet = CalculateMin(iHrs);

	printf("Number of Minut is %d",iRet);
	return 0;
}

