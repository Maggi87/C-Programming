/*
	5. Accept number from user and print its factors using recursive approach.
	Input : 15
	Output : 1 3 5
*/
#include"myheader.h"

void Factor(int iNo)
{
	static int i = 1;
	if(i<=iNo/2)
	{
		if((iNo % i)==0)
		{
			printf("%d\t",i);
		}
		i++;
		Factor(iNo);
	}
}