//6. Accept number in decimal format and print its binary equivalent number.

#include<stdio.h>
#include"myheader.h"
int main()
{
	int iNo = 0;
	
	

	printf("Enter the Number");
	scanf("%d", &iNo);
	
	Binary(iNo);
	
	return 0 ;
}
