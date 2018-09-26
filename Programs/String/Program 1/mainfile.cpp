#include<stdio.h>
#include"myheader.h";
int main()
{
	char str[30];

	printf("Enter the String\n");
	scanf("%[^'\n']s",str);

	Display(str);

	return 0;
}