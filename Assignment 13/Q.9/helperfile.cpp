/*
	9. Accept sing from user and reverse the contents of that string.
	(Implement strrev() function)
	Input  : “abcdef”
	Output : “fedcba”
*/

#include<stdio.h>
#include"myheader.h";
void StrRevX(char *str)
{
	
	char *start, *end, temp;

	if(NULL == str)
	{
		return;
	}

	start = str;
	end = str;

	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(start<=end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

