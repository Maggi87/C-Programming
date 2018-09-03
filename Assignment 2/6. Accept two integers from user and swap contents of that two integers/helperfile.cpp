#include"myheader.h"

void Swap(int *ptr1,int *ptr2)
{
	
	*ptr1 = *ptr1 - *ptr2;
	*ptr2 = *ptr1 + *ptr2;
	*ptr1 = *ptr2 - *ptr1;

	printf("%d %d\n", *ptr1, *ptr2);
	

}