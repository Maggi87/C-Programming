/*
	7 . Accept rad ius of c irc le from user and ca lcu late its
circumference (2*PI*R).
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	float iValue = 0;
	float fRet = 0.0f;


	printf("Enter the circle of radius");
	scanf("%f",&iValue);

	fRet = AreaCircle(iValue);

	printf("Area of centermeter to meter is %f",fRet);

	return 0;
}