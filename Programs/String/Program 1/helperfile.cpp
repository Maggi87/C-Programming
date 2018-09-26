#include<stdio.h>
#include"myheader.h";
void Display(char *arr)
{
	int i= 0;
	while(*arr!='\0')
	{
		printf("%c\n",*arr);
		*arr++;
	}
}