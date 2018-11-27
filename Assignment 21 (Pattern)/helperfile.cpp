#include<stdio.h>
#include"myheader.h"
void Pattern1(int *arr,int iSize)
{	
	int i = 0, j = 0;

	if((arr==NULL)||(iSize<0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		for(j=0;j<iSize;j++)
		{
			if(i>j)
			{
				printf("0\t");
			}
			else
			{
				printf("%d\t",arr[j]);
			}
		}
		printf("\n");
	}


}
void Pattern2(int *arr,int iSize)
{
	int i = 0, j = 0;

	if((arr==NULL)||(iSize<0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		if((i%2)==0)
		{
			for(j=0;j<iSize;j++)
			{
				if((j%2)==0)
				{
					printf("%d\t",arr[j]);
				}
				else
				{
					printf("00\t");
				}
			}
		}
		else
		{
			for(j=iSize-1;j>=0;j--)
			{
				if((j%2)==0)
				{
					printf("%d\t",arr[j]);
				}
				else
				{
					printf("00\t");
				}
			}
		}
		printf("\n");
	}
}
void Pattern3(int *arr,int iSize)
{
	int i = 0, j = 0;

	if((arr==NULL)||(iSize<0))
	{
		return;
	}

	for(i=iSize;i>0;i--)
	{
		for(j=0;j<iSize;j++)
		{
			if(i>j)
			{
				printf("%d\t",arr[j]);
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
	
}
void Pattern4(int *arr,int iSize)
{
	int i = 0, j = 0;

	if((arr==NULL)||(iSize<0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		for(j=0;j<=iSize;j++)
		{			
			printf("%d\t",arr[i]);			
		}
		printf("\n");
	}
}
void Pattern5(int *arr,int iSize)
{
	int i = 0, j = 0;

	if((arr==NULL)||(iSize<0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		for(j=1;j<iSize+1;j++)
		{			
			if((j%2)==0)
			{
				printf("00\t");	
			}
			else
			{					
				printf("%d\t",arr[i]);		
			}
		}
		printf("\n");
	}
}
