﻿/*
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
int main()
{
	char ch;


	printf("Enter the character\n");
	scanf("%c",&ch);

	DisplaySchedule(ch);

	return 0;
}