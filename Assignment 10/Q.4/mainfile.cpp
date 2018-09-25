#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int i = 0, j = 0, iLenght = 0, jLenght = 0, cLenght = 0;
	int *arr = NULL;
	int *brr = NULL;
	int *iRet = NULL;

	printf("Enter the Lenght of First Array");
	scanf("%d",&iLenght);

	printf("Enter the Lenght of Second Array");
	scanf("%d",&jLenght);

	arr = (int *)calloc(iLenght,sizeof(int));
	brr = (int *)calloc(jLenght,sizeof(int));

	if((arr==NULL)&&(brr==NULL))
	{
		printf("Enabled allocate memory");
		return -1;
	}

	printf("Enter the 1st Array Element");
	for(i=0;i<iLenght;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the 2nd Array Element");
	for(j=0;j<jLenght;j++)
	{
		scanf("%d",&brr[j]);
	}

	cLenght = iLenght+jLenght;
	iRet = ArrayConcate(arr,iLenght,brr,jLenght);
	Display(iRet,cLenght);

	free(arr);
	free(brr);
	free(iRet);

	return 0;
}