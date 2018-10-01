/*
	5. Accept division of student from user and depends on the
	division display exam timing. There are 4 divisions in school as
	A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM
	and D at 10.30 AM. (Application should be case insensitive)
	Input : C
	Output : Your exam at 9.20 AM
	Input : d
	Output : Your exam at 10.30 AM
*/
#include<stdio.h>
#include"myheader.h";
void DisplaySchedule(char chDiv) 
{
	if(NULL == chDiv)
	{
		return;
	}
	char temp = chDiv;
	if((chDiv>='a')&&(chDiv<='z'))
	{
		chDiv = chDiv - 32;
	}

	if((chDiv == 'A'))
	{
		printf("Your exam at 7 AM ");
	}
	else if((chDiv == 'B'))
	{
		printf("Your exam at 8:30 AM ");
	}
	else if((chDiv == 'C'))
	{
		printf("Your exam at 9:20 AM ");
	}
	else if((chDiv == 'D'))
	{
		printf("Your exam at 10:30 AM ");
	}
	else
	{
		printf("Please select valid division");
	}
}
	