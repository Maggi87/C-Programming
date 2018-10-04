/*
	10. Accept string from user and check whether the string is
	palindrome or not.

	Input : “abccBa”
	Output : TRUE
*/

#include<stdio.h>
#include"myheader.h";
int main()
{

	char arr[30] = {'\0'};
	BOOL iRet = FALSE;

	printf("Enter the String");
	scanf("%[^'\n']s",arr);

	iRet = ChkPolydrom(arr);

	if(iRet == TRUE)
	{
		printf("String is Polydrom",iRet);
	}
	else if(iRet == FALSE)
	{
		printf("Strinng is Not Polydrom");
	}

}