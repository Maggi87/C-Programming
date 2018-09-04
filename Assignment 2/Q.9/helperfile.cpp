#include"myheader.h"

void Fibonacci(int iValue)
{
	
	int a=0;
	int b=1;

	int c=0;

	for(int i = 1; i<=iValue; i++)
	{
		c = a+b;
		a = b;
		b = c;

		printf("%d\n",c);
	}
}