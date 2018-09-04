//4. Write a program which accept two numbers from user and display its largest common factors.

#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo1=0, iNo2=0;

	printf("Enter the first number");
	scanf_s("%d", &iNo1);

	printf("Enter the second number");
	scanf_s("%d",&iNo2);

	PrintEven(iNo1,iNo2);

	return 0;
}
