#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo;

	printf("Enter the number");
	scanf("%d", &iNo);

	PrintEven(iNo);

	return 0;
}
