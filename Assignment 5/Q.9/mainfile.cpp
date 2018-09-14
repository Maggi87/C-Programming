/*
9. Accept length and wide of rectangle and calculate its area
(Length * Width). 
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	float fLength = 0.0, fWidth = 0.0, lRet = 0.0;


	printf("Enter the length and width");
	scanf_s("%f %f",&fLength, &fWidth);

	lRet = AreaRect(fLength,fWidth);

	printf("Area of Reactangle %f",lRet);

	return 0;
}