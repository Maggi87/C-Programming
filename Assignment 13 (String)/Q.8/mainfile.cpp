/*
	8. Write a program which 2 strings from user and check whether
	first N contents of two strings are equal or not. (Implement
	strcmp() function).
	Note : If third parameter is greater than the size of second string
	then concat whole string after first string.
	Input : “Marvellous Infosystems”
	“Marvellous Logic Building”
	10
	Output : TRUE
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[50] = "Marvellous Infosystems";
	char brr[50] = "Marvellous Login Infosystems";;
	BOOL iRet = TRUE;	
	/*
	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	printf("Enter the 2st String");
	scanf("%[^'\n']s",brr);
	*/
	iRet = StrNCmpX(arr,brr,10);

	if(iRet == TRUE)
	{
		printf("String is Equal");
	}
	else
	{
		printf("String is not Equal");
	}
	
	return 0;
}
