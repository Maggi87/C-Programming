#include<stdio.h>
#include"myheader.h";
int main()
{
	
	UINT iKilometer = 0, iRet = 0;

	printf("Enter Kilometer");
	scanf("%d",&iKilometer);

	iRet = RentCalulate(iKilometer);

	printf("Total Rent is %d",iRet);
	return 0;
}

