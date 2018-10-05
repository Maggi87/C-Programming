/*
	1.Write a program which accept string from user and copy the
	contents of that string into another string. (Implement strcpy()
	function)

	Input : “Marvellous Multi OS”
	Output : “Marvellous Multi OS” in another string

	void StrCpyX(char *src, char *dest)
	{
		
	}
*/

#include<stdio.h>
#include"myheader.h";
int main()
{

	char arr[30] = {'\0'};
	char brr[50] = {'\0'};

	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	StrCpyX(arr,brr);

	printf("Copy String is %s",brr);

	return 0;

}