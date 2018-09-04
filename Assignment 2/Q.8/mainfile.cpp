//8. Accept one character from user and convert case of that character.

#include<stdio.h>
#include"myheader.h"
int main()
{
	char ch;

	printf("Enter the Character\n");
	scanf("%c",&ch);

	DisplayConvert(ch);

	return 0 ;
}
