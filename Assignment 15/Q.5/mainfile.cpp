/*
	5. Write a program which accept two inputs from user and display below
	pattern.

	Input : 4 5

	Output :
	1 $ 3 $ 5
	1 $ 3 $ 5
	1 $ 3 $ 5
	1 $ 3 $ 5
*/
#include<stdio.h>
#include"myheader.h";
int main()
{
	int iNo1 = 0, iNo2 = 0;
	
	printf("Enter the two Number");
	scanf("%d %d",&iNo1,&iNo2);

	pattern(iNo1,iNo2);
	return 0;
}