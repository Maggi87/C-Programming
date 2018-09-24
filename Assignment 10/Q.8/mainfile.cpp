#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int i=0, aLenght = 0, bLenght = 0;
	int *arr = NULL;
	int *iRet = NULL;
	
	

	printf("Enter the 1st Array Element");
	scanf("%d",&aLenght);

	//printf("Enter the 2nd Array Element");
	//scanf("%d",&bLenght);

	arr = (int *)calloc(aLenght,sizeof(int));
	//brr = (int *)calloc(bLenght,sizeof(int));
	
	printf("Enter the first array element");
	for(i = 0; i<aLenght; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	/*
	printf("Enter the second array element");
	for(i = 0; i<bLenght; i++)
	{
		scanf("%d",&brr[i]);
	}
	*/
	iRet = CopyArray(arr,aLenght);
	Display(iRet,aLenght);
	
	free(arr);
	free(iRet);
	
	return 0;
}