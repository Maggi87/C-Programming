#include<stdio.h>
#include"myheader.h"
void Pattern1(int iNo)
{
	int i = 0;
	char ch;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(i=1,ch='A';i<=iNo;i++,ch++)
	{
		printf("%c\t",ch);
	}
}
void Pattern2(int iNo)
{
	int i = 0;
	char ch = 'a';
	for(i=1,ch='a';i<=iNo;i++,ch++)
	{
		if((i%2)!=0)
		{
			ch = ch - 32;
			printf("%c",ch);
		}
		else
		{
			ch = ch + 32;
			printf("%c\t",ch);
		}
	}
}
void Pattern3(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
void Pattern4(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}
void Pattern5(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((j%2)!=0)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}
void Pattern6(int iRow,int iCol)
{}
void Pattern7(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i%2)!=0)
			{
				printf("$\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}
}
void Pattern8(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i<=j)
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
void Pattern9(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
void Pattern10(int iRow,int iCol)
{
	int i = 0, j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}