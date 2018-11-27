/*
	2. Write a program which accept string from user and copy the
	contents of that string into another string. (Implement strncpy() function)

	Input : “Marvellous Multi OS”
	10

	Output : “Marvellous
*/

#include<stdio.h>
#include"myheader.h";
int main()
{

	char arr[30] = {'\0'};
	char brr[50] = {'\0'};

	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	StrNCpyX(arr,brr,13);

	printf("Copy String is %s",brr);

	return 0;

}