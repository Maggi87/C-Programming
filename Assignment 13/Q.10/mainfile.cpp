/*
	10. Accept string from user and check whether the string is
	palindrome or not without considering its case.

	Input : “abccBa”
	Output : TRUE

	BOOL StrPallindrome(char *str)
	{
		// Filter
		// Logic
	}
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[50];
	BOOL iRet;

	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);
	/*
		printf("Enter the 2st String");
		scanf("%[^'\n']s",brr);
	*/
	iRet = StrPolydrom(arr);

	if(iRet == TRUE)
	{
		printf("String is polydrom");
	}
	else
	{
		printf("String is not polydrom");
	}
	return 0;
}
