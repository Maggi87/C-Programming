/*
	4. Accept sing from and print the contents of string in reverse manner using recursive
	approach.
	Input : “Marvellous”
	Output : s u o l l e v r a M
*/
#include"myheader.h"

void StrDisplayR(char *src)
{
	if(*src != '\0')
	{
		src++;
		StrDisplayR(src);
		printf("%c",*src);		
	}
}