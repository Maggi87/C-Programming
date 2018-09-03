#include<stdio.h>
#include"myheader.h"
int main()
{
	char iChar;

	printf("Enter the Character\n");
	scanf("%c",&iChar);

	CkhVowel(iChar);

	return 0 ;
}
