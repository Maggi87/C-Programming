#include<stdio.h>
/*  
	4. Write a program which accept string from user and display characters from that
	string using recursive approach.
	Input : “Marvellous”
	Output : M a r v e l l o u s
*/

void StrDisplayR(char *src)
{
	if(*src != '\0')
	{
		printf("%c",*src);
		src++;
		StrDisplayR(src);
	}
}
int main()
{
	char arr[30] = "Marvellous";
	StrDisplayR(arr);
	return 0;
}