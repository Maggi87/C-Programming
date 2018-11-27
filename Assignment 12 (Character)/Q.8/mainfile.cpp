/*
	8. Accept character from user. If it is capital then display all the
	characters from the input characters till Z. If input character is
	small then print all the characters in reverse order till a. In other
	cases return directly.
	Input : Q
	Output : Q R S T U V W X Y Z
	Input : m
	Output : m l k j i h g f e d c b a
*/
#include<stdio.h>
#include"myheader.h";
int main()
{

	char a;

	fflush(stdin);

	printf("Enter the characters");
	scanf("%c",&a);
	
	Display(a);	

	return 0;
}