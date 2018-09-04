//5. Accept radius from user and return circumference of circle.

#include<stdio.h>
#include"myheader.h"
int main()
{
	float iNo1 = 0.0f;
	float iRet = 0.0f;
	

	printf("Enter the Redius of circle");
	scanf("%f", &iNo1);
	
	iRet = Circum(iNo1);

	printf("circumference of circle is %f :-", iRet);	

	return 0 ;
}
