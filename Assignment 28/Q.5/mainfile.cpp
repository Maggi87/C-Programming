#include<stdio.h>
/*  
	5. Write a program which accept string from user and count length of string using
	recursive approach.
	Input : “Marvellous”
	Output : 10
*/

int StrDisplayR(char *src)
{
	static int iCnt = 0;
	if(*src != '\0')
	{
		iCnt++;
		src++;
		StrDisplayR(src);
	}

	return iCnt;
}
int main()
{
	char arr[30] = "Marvellous";
	printf("%d",StrDisplayR(arr));
	return 0;
}