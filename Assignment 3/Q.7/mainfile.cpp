//7. Accept range from user and print all numbers between that range.

#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo1 = 0, iNo2 = 0;

	printf("Enter the two number");
	scanf("%d %d",&iNo1, &iNo2);

	DisplayRange(iNo1,iNo2);

	return 0;
} 
