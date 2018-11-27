/*
	10. Accept string from user and check whether the string is
	palindrome or not without considering its case.

	Input : “abccBa”
	Output : TRUE

	void StrPallindrome(char *str)
	{
		// Filter
		// Logic
	}
*/

#include<stdio.h>
#include"myheader.h";
BOOL StrPolydrom(char *str)
{
	
	char *start, *end;
	char temp = *str;

	start = str;
	end = str;

	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(start<=end)
	{
		if(*start!=*end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start>end)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

