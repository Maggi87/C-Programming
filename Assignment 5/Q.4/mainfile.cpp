/*
	4. Accept length of side from user and calculate area of square. 
*/
#include<stdio.h>
#include"myheader.h";

int main()
{
	float iValue = 0, fRet = 0.0f;


	printf("Enter the length of user");
	scanf("%f",&iValue);

	fRet = AreaSquare(iValue);

	printf("Area of square is %f",fRet);

	return 0;
}