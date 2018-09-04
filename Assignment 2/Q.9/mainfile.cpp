//9. Accept one number and print that number of elements from Fibonacci series.

#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo = 0;

	printf("Enter the Number\n");
	scanf("%d",&iNo);

	Fibonacci(iNo);

	return 0 ;
}
