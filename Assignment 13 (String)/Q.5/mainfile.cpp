/*
	5. Write a program which 2 strings from user and concat second
	string after first string. (Implement strcat() function).

	Input : “Marvellous Infosystems”
	“Logic Building”

	Output : “Marvellous Infosystems Logic Building”
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[50] = "Deo Delly";
	char brr[30] = "John";

	fflush(stdin);
	/*
	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	printf("Enter the 2st String");
	scanf("%[^'\n']s",brr);
	*/
	StrCatX(arr,brr);

	printf("Copy String is %s",brr);
	printf("\n");

	return 0;

}