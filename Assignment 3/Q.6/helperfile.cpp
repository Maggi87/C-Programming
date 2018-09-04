#include"myheader.h"
#include<stdio.h>

void Binary(int iValue)
{
	int  r= 0, i =1, b = 0;
	
	while(iValue != 0)
	{
		printf("%d",iValue, b);

		r = iValue % 2;
		iValue = iValue / 2;
		b = b + r * i;
		i = i * 10;
		
	}

	
}