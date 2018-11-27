/*
	1.Write a program which accept string from user count number of
	words from string

	Input : “Marvellous Multi OS”

	Output : 3
*/
#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[30];
	int iRet = 0;

	printf("Enter the String");
	scanf("%[^'\n']s",arr);

	iRet = WordCount(arr);

	printf("No of word is %d",iRet);

	return 0;
}