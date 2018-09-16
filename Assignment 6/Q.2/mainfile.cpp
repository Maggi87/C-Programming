#include<stdio.h>
#include"myheader.h";
int main()
{
	
	UINT iHrs = 0, iRet = 0;

	printf("Enter Kilometer");
	scanf("%d",&iHrs);

	iRet = ParkingCalculate(iHrs);

	printf("Total Rent is %d",iRet);
	return 0;
}

