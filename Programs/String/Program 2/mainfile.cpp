#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[30] = {'\0'};

	printf("Enter the String");
	scanf("%[^'\n']s",arr);

	ReverseDisplay(arr);
	return 0;
}