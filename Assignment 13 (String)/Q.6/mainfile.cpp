/*
	6. Write a program which 2 strings from user and concat N
	characters of second string after first string.Value of N should be
	accepted from user. (Implement strncat() function).

	Note : If third parameter is greater than the size of second string
	then concat whole string after first string.

	Input : “Marvellous Infosystems”
			“Logic Building”
	5

	Output : “Marvellous Infosystems Logic”
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[50] = "Logic Building ";
	char brr[30] = "Marvellous Infosystems";

	fflush(stdin);
	/*
	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	printf("Enter the 2st String");
	scanf("%[^'\n']s",brr);
	*/
	StrCatX(arr,brr,5);

	printf("Copy String is %s",brr);
	printf("\n");

	return 0;

}