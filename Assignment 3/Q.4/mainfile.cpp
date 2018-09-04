//4. Accept three numbers from user and return its average.

#include<stdio.h>
#include"myheader.h"
int main()
{
	float iNo1 = 0.0f;
	float iNo2 = 0.0f;
	float iNo3 = 0.0f;
	float iRet =  0.0f;

	printf("Enter the iNo1");
	scanf("%f", &iNo1);

	printf("Enter the iNo2");
	scanf("%f", &iNo2);

	printf("Enter the iNo3");
	scanf("%f", &iNo3);

	iRet = Avg(iNo1, iNo2, iNo3);

	printf("Avarege %f :-", iRet);	

	return 0 ;
}
