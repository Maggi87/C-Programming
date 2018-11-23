#include<stdio.h>
/*1. Write generic program which accept one value and one number from user. Print
that value that number of times on screen.*/

template<class T>
void Display(T value,int iSize)
{
	while(iSize!=0)
	{
		printf("%d",(int)value);
		printf("%c",(char)value);
		printf("%f",(float)value);		
		iSize--;
	}

	printf("\n");
}
int main()
{
	Display(4,4);
	Display('M',4);
	Display(5.4,4);

	return 0;
}