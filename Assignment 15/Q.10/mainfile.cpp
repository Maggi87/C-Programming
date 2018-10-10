/*
    i/p 4 4
    o/p
    *       *       *       *
    *       $       $       *
    *       $       $       *
    *       *       *       *
*/
#include<stdio.h>
#include"myheader.h"

int main()
{
	int iValue1 = 0, iValue2 = 0;

	printf("Enter the Row and Coloum\n");
	scanf("%d %d",&iValue1,&iValue2);

	pattern(iValue1,iValue2);

	return 0;
}