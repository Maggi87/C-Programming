#include<stdio.h>
#include"myheader.h";
BOOL ChkPolydrom(char *str)
{
	char *start, *end;

	start = str;
	end = str;

	while(*end!='\0')
	{
		end++;
	}
	end--;

	while(start<end)
	{
		if(*start!=*end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start>=end)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}