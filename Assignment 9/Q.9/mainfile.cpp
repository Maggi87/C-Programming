#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int iCnt = 0,jCnt=0, aLenght = 0, bLenght = 0;
	int iRet = 0;
	int *arr=NULL;
	int *brr=NULL;

	arr = (int*)calloc(aLenght,sizeof(int));
	brr = (int*)calloc(bLenght,sizeof(int));

	if((brr==NULL) && (arr==NULL))
	{
		printf("Enabled allocate Memory");
		return -1;
	}

	printf("Enter the 1st Array Length");
	scanf("%d",&aLenght);

	printf("Enter the 2nd Array Length");
	scanf("%d",&bLenght);

	printf("Enter the 1st Array Element");
	for(iCnt=0;iCnt<aLenght;iCnt++)
	{
		scanf("%d",&arr[iCnt]);
	}
	

	printf("Enter the 2nd Array Element");
	for(jCnt=0;jCnt<bLenght;jCnt++)
	{
		scanf("%d",&brr[jCnt]);
	}

	iRet = ArrayDiff(arr,aLenght,brr,bLenght);
	Display(iRet);
	

	free(arr);
	free(brr);
	return 0;
}