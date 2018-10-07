/*
	Accept String from user and return number of word from that string

	input                              Output
	1>abc____fvf_____rgerg____gerg       4
    2>_____frefr_____frefe               2
	3>___ferf__________ferf_________     3
	4>aaaaaae                            1
	5>______________________             0

*/
#include<stdio.h>
#include</home/user/Desktop/C Program/myheader.h>
void strlenX(char *str)
{
	int iCnt = 0;
	if(NULL == str)
	{
		return;
	}

	while(*str!='\0')
	{
		if(*str==' ')
		{
			while((*str!=' ')&&(*str!='\0'))
			{
				str++;
			}
		}
		else
		{
			iCnt++;
			if(*str!=' ')
			{
				while((*str!=' ')&&(*str!='\0'))
				{
					str++;
				}

			}
		}
		str++;
	}

	printf("Number of words :- %d",iCnt);

}
