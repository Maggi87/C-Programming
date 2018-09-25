#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
void ArrayReplace(char *arr, int iSize)
{
	int i = 0;

	if((arr == NULL)||(iSize<=0))
	{
		return;
	}

	for(i=0;i<iSize;i++)
	{
		/*if((arr[i]>=65)&&(arr[i]<=92))
		{
			arr[i] = arr[i]+32;
		}
		else*/ 
		if((arr[i]>=97)&&(arr[i]<=122))
		{
			arr[i] = arr[i]-32;
		}
	}
}

void Display(char *arr, int iSize)
{
	int i = 0;

	for(i=0;i<iSize;i++)
	{
		printf("%c",arr[i]);
	}

}