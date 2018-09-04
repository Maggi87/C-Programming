#include"myheader.h"
#include<stdio.h>
#define PI 3.14

float Circum(float iValue)
{
	
	float circum = 0.0f;
	float area = 0.0f;

	circum = 2 * PI * iValue;

	area = PI * (iValue * iValue);


	return circum;

}