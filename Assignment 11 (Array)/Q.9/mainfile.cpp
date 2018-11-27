#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int i=0, aLenght = 0;
	char *arr = NULL;
	int iRet = 0;	

	printf("Enter the lenght Array Element");
	scanf("%d",&aLenght);

	arr = (char*)calloc(aLenght,sizeof(char));
	
	if((arr==NULL))
	{
		printf("Enabled allocate Memory");
		return -1;
	}
	
	printf("Enter the first array element");
	for(i = 0; i<aLenght; i++)
	{
		scanf("%c",&arr[i]);
	}
	
	
	/*
	printf("Enter the second array element");
	for(i = 0; i<bLenght; i++)
	{
		scanf("%d",&brr[i]);
	}
	*/
	iRet = ArrayCapital(arr,aLenght);
	Display(iRet);
	
	free(arr);	
	return 0;
}