/*
	7. Accept two characters from user and swap its contents if both
	the characters are small or both the characters are capital. In
	other cases keep the contents as it is.

	Input : K L
	Output : L K
	Input : K o
	Output : K o
	Input : u g
	Output : g u
	Input : * h
	Output : * h 
*/
#include<stdio.h>
#include"myheader.h";
int main()
{

	char a;
	char b;

	fflush(stdin);

	printf("Enter the characters");
	scanf("%c %c",&a,&b);
	
	SwapX(&a,&b);	
	printf("%c %c",a,b);
	return 0;
}