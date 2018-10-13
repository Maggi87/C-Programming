#include<stdio.h>
#include"myheader.h"
void Pattern1(int iRow,int iCol)
{
	int i = 0, j = 0;
	char ch = 'A';

	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++,ch='A')
	{	
		for(j=1;j<=iCol;j++,ch++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("%c\t",ch);
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
	
}
void Pattern2(int iRow,int iCol)
{
	int i = 0, j = 0;

	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{	
		if((i%2)!=0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d",j);
			}
		}
		else
		{
			for(j=iCol;j>=1;j--)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}
void Pattern3(int iRow,int iCol)
{
	int i = 0, j = 0;

	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{	
		for(j=1;j<=iCol;j++)
		{
			printf("%d",i);
		}
		
		printf("\n");
	}
}
void Pattern4(int iRow,int iCol)
{
	int i = 0, j = 0;

	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{	
		for(j=1;j<=iCol;j++)
		{
			if((j%2)!=0)
			{
				printf("%d\t",i);
			}
			else
			{
				printf("*\t");
			}
		}		
		printf("\n");
	}
}
void Pattern5(int iRow,int iCol)
{
	int i = 0, j = 0;

	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1;i<=iRow;i++)
	{	
		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else  if((j==1)||(i==iRow))
			{
				printf("@\t");
			}
			else if((i==1)||(j==iCol))
			{
				printf("*\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else if(i<j)
			{
				printf("&\t");
			}
		}		
		printf("\n");
	}
}
