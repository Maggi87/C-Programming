/*
	2. Write a program which accept string from user and return
	length of largest word.

	Input : “Marvellous Multi OS Infosystems”

	Output : 11
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