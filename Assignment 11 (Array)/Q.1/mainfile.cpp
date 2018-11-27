#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int iCnt = 0, aLenght = 0;
	
	int *arr=NULL;

	printf("Enter the 1st Array Length");
	scanf("%d",&aLenght);

	arr = (int*)calloc(aLenght,sizeof(int));
	if((arr==NULL))
	{
		printf("Enabled allocate Memory");
		return -1;
	}
	
	printf("Enter the 1st Array Element");
	for(iCnt=0;iCnt<aLenght;iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	
	ReverseArray(arr,aLenght);		
	free(arr);	
	return 0;
}