/*
	9. Accept sing from user and reverse the contents of that string.
	(Implement strrev() function)
	Input : “abcdef”
	Output : “fedcba”
*/

#include<stdio.h>
#include"myheader.h";
int main()
{
	char arr[50];
		

	printf("Enter the 1st String");
	scanf("%[^'\n']s",arr);
	/*
		printf("Enter the 2st String");
		scanf("%[^'\n']s",brr);
	*/
	StrRevX(arr);

	printf("%s",arr);
	return 0;
}
