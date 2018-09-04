#include"myheader.h"

void PrintEven(int iNo)
{
	int iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("%d",iCnt);
		}
	}

}