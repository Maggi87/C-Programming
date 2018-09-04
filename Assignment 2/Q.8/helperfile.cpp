#include"myheader.h"

void DisplayConvert(char iValue)
{
	
	if((iValue>=65)&&(iValue<=92))
	{
		iValue = iValue + 32;
		printf("%c\n", iValue);
	}
	else
	{
		iValue = iValue - 32;
		printf("%c", iValue);
	}
}