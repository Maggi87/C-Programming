/*
	4. Write a program which accept string from user and copy the
	contents into another string by removing all white spaces.

	Input : “Marvel lous multi OS”
	Output : “MarvellousmultiOS”
*/
#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[30];
	char brr[30];
	

	printf("Enter the String");
	scanf("%[^'\n']s",arr);

	StrCpy(arr,brr);

	printf("%s",brr);

	return 0;
}