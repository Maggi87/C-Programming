/*6. Accept distance in centimetre and convert into meter. */
#include<stdio.h>
#include"myheader.h";

int main()
{
	int iValue = 0;
	float fRet = 0.0f;


	printf("Enter the Centmeter");
	scanf("%d",&iValue);

	fRet = CeToMe(iValue);

	printf("Area of centermeter to meter is %f",fRet);

	return 0;
}