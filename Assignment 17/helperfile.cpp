#include<stdio.h>
#include"myheader.h"
void Pattern1(char *str)
{	
	
	int iCnt = 0, i = 0, j = 0;
	if(NULL == str)
	{
		return;
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
}
void Pattern2(char *str)
{
	int iCnt = 0, i = 0, j = 0;
	if(NULL == str)
	{
		return;
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j+i]!='\0';j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
}
void Pattern3(char *str)
{
	int iCnt = 0, i = 0, j = 0;
	if(NULL == str)
	{
		return;
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c\t",str[j]);
		}
		printf("\n");
	}
	
}
void Pattern4(char str[])
{
	int iCnt = 0, i = 0, j = 0;
	if(NULL == str)
	{
		return;
	}

	while(str[i]!='\0')
	{
		iCnt++;
		i++;
	}
	
	for(i=0;i<=iCnt;i++)
	{
		for(j=0;j<iCnt;j++)
		{
			if((i==0)||(i==iCnt)||(j==0)||(j==iCnt-1))
			{
				printf("%c\t",str[j]);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
void Pattern5(char *str)
{
	int iCnt = 0, i = 0, j = 0;
	if(NULL == str)
	{
		return;
	}
	
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str[j]!='\0';j++)
		{
			if(j<=i)
			{
				printf("%c\t",str[j]);
			}
			else
			{
				printf("@\t");
			}
		}
		printf("\n");
	}
}
