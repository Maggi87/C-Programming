//10. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.

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
