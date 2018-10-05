/*
	7. Write a program which 2 strings from user and check whether
	contents of two strings are equal or not. (Implement strcmp()
	function).

	Input : “Marvellous Infosystems”
	“Marvellous Infosystems”
	Output : TRUE
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[50] = "abe";
	char brr[50] = "abc";
	BOOL iRet = TRUE;	
	/*
	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);

	printf("Enter the 2st String");
	scanf("%[^'\n']s",brr);
	*/
	iRet = StrCmpX(arr,brr);

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