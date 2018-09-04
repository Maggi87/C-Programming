#include"myheader.h"
#include<stdio.h>

int SimpleIntrest(int principle, int time, int rate)
{
	
	int simpleinterst;

	simpleinterst = ((principle * time * rate) / 100);

	return simpleinterst;

}