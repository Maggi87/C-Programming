/*
	3. Write a program which accept principle amount, time and
	create of interest from user and calculate simple interest. 
*/

#include"myheader.h"
#include<stdio.h>

int SimpleIntrest(int principle, int time, int rate)
{
	
	int simpleinterst;

	simpleinterst = ((principle * time * rate) / 100);

	return simpleinterst;

}