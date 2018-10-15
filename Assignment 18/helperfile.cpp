#include<stdio.h>
#include"myheader.h"
void Pattern1(int iNo)
{	
	int i = 0, j = 0, temp = 0, iCnt = 0, iRev = 0, iDigit = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	temp = iNo;

	while(iNo!=0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
		iCnt++;
	}
	
	iNo = iRev;

	for(i=1;i<=iCnt;i++,iNo = iRev)
	{
		for(j=1;j<=iCnt;j++,iNo=iNo/10)
		{
			printf("%d\t",iNo%10);
		}
		printf("\n");
	}

}
void Pattern2(int iNo)
{
	int i = 0, j = 0, temp = 0, iCnt = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	temp = iNo;

	while(iNo!=0)
	{
		iNo = iNo / 10;
		iCnt++;
	}
	iNo = temp;

	for(i=1;i<=iCnt;i++,iNo = temp)
	{
		for(j=1;j<=iCnt;j++,iNo=iNo/10)
		{
			printf("%d\t",iNo%10);
		}
		printf("\n");
	}
}
void Pattern3(int iNo)
{
	
	int i = 0, j = 0, temp = 0, iCnt = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	temp = iNo;

	while(iNo!=0)
	{
		iNo = iNo / 10;
		iCnt++;
	}
	iNo = temp;

	for(i=1;i<=iCnt;i++,iNo = temp)
	{
		for(j=1;j<=i;j++,iNo=iNo/10)
		{
			printf("%d\t",iNo%10);
		}
		printf("\n");
	}
}
void Pattern4(int iNo)
{
	int i = 0, j = 0, temp = 0, iCnt = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	temp = iNo;

	while(iNo!=0)
	{
		iNo = iNo / 10;
		iCnt++;
	}
	iNo = temp;

	for(i=iCnt;i>=1;i--,iNo = temp)
	{
		for(j=1;j<=i;j++,iNo=iNo/10)
		{
			printf("%d\t",iNo%10);
		}
		printf("\n");
	}
}
void Pattern5(int iNo)
{
	int i = 0, j = 0, temp = 0, iCnt = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	temp = iNo;

	while(iNo!=0)
	{
		iNo = iNo / 10;
		iCnt++;
	}
	iNo = temp;

	for(i=1;i<=iCnt;i++,iNo = temp)
	{
		for(j=1;j<=iCnt;j++,iNo=iNo/10)
		{
			if((i==1)||(i==iCnt)||(j==1)||(j==iCnt))
			{
				printf("%d\t",iNo%10);
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
}
