#include"myheader.h"
#include<stdio.h>

void CkhVowel(char iValue)
{
	
	if( (iValue == 'a') || (iValue == 'e') ||  (iValue == 'i') || (iValue == 'o') || (iValue == 'u'))
	{
		printf("%c Character is VOWEL\n", iValue);
	}
	else
	{
		printf("%c Character is Not VOWEL\n", iValue);
	}
}