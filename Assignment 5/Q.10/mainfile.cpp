/*
	10. Write a program which accept length of three sides of triangle
	and check whether it is Pythagorean triple or not.
	Input : 3 4 5
	Output : TRUE
	Input : 9 2 8
	Output : FALSE
*/

#include<stdio.h>
#include"myheader.h";

int main()
{
	BOOL iRet = 0;
	int iNo1 = 0, iNo2 = 0, iNo3 = 0;

	printf("Enter the three side od triangle");
	scanf("%d %d %d",&iNo1,&iNo2,&iNo3);
	
	iRet = CkhPythagorus(iNo1,iNo2,iNo3);

	if(iRet == TRUE)
	{
		printf("Triangle is Pythagoreas");
	}
	else
	{
		printf("Triangle is not Pythagoreas");
	}
	
	return 0;
}