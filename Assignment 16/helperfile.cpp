#include<stdio.h>
#include"myheader.h"
void Pattern1(int iRow,int iCol)
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
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
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
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("%d\t",j);
			}
			else
			{
				printf("* \t");
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
			if((i==1)||(i==iRow)||(j==1)||(j==iCol))
			{
				printf("%d\t",i);
			}
			else
			{
				printf("* \t");
			}
		}
		printf("\n");
	}
}
void Pattern4(int iRow,int iCol)
{
	int i = 0 , j = 0;
	int no = 0;
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1,no = 1;i<=iRow;i++)
	{
		for(j=1;j<=i;j++,no++)
		{
			printf("%d\t",no);				
		}
		printf("\n");
	}
}
void Pattern5(int iRow,int iCol)
{
	int i = 0 , j = 0;
	int no = 0;
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=1,no = 1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("%d\t",no);	
				no++;
			}
			else
			{
				printf("*\t");	
			}
		}
		printf("\n");
	}
}
void Pattern6(int iRow,int iCol)
{
	int i = 0 , j = 0;
	if(iRow<0)
	{
		iRow = -iRow;
	}
	if(iRow<0)
	{
		iCol = -iCol;
	}
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
void Pattern7(int iRow,int iCol)
{
	int i = 0, j = 0, no = 0;

	for(i=1,no = 1;i<=iRow;i++,no++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",no);
		}
		printf("\n");
	}
	
}
void Pattern8(int iRow,int iCol)
{
	int i = 0, j = 0, no = 0;

	for(i=1,no = 1;i<=iRow;i++,no++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("%d\t",no);
			}
			else
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
			if(i==j)
			{
				printf("$\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
void Pattern10(int iRow,int iCol)
{
	int i = 0, j = 0, k = 0;

	for(i=iRow;i>=1;i--)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i>=j)
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}