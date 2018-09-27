#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[30] = {'\0'};
	char ch;
	int iRet = 0;

	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);

	fflush(stdin);

	printf("Enter the character");
	scanf("%c",&ch);

	iRet = frequency(arr, ch);
	printf("Frequency of character %d\n",iRet);

	return 0;
}