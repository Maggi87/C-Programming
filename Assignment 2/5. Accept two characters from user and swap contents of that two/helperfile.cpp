#include"myheader.h"

void Swap(char *ptr1,char *ptr2)
{
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("%c %c\n", *ptr1, *ptr2);
	

}