/*
	5. Accept radius of circle from user and calculate its area
(PI*R*R). 
*/
#include<stdio.h>
#include"myheader.h";

int main()
{
	float iValue = 0, fRet = 0.0f;


	printf("Enter the redius of circle");
	scanf("%f",&iValue);

	fRet = AreaSquare(iValue);

	printf("Area of square is %f",fRet);

	return 0;
}