/*
	4. Write a program which accept string from user and copy small
	characters of that string into another string.

	Input : “Marvellous multi OS”

	Output : “arvellous multi”
*/

#include<stdio.h>
#include"myheader.h";
int main()
{

	char arr[30] = {'\0'};
	char brr[50] = {'\0'};

	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	StrCpySmall(arr,brr);

	printf("Copy String is %s",brr);

	return 0;

}