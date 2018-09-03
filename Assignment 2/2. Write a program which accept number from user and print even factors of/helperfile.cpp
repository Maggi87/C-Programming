#include"myheader.h"

void PrintEven(int iNo)
{
	int i = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}

	for(i=1;i<=iNo;i++)
	{
		if((i%2)==0)
		{
			printf("%d",i);
		}
	}

}