#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int iCnt = 0, iLenght = 0;
	int *brr=NULL;

	printf("Enter the Array Length");
	scanf("%d",&iLenght);

	brr = (int*)calloc(iLenght,sizeof(int));

	if(brr==NULL)
	{
		printf("Enabled allocate Memory");
		return -1;
	}

	printf("Enter the Array Element");
	for(iCnt=0;iCnt<iLenght;iCnt++)
	{
		
		scanf("%d",&brr[iCnt]);
	}

	DisplayDivisible(brr,iLenght);
	//Display(brr,iLenght);

	free(brr);
	return 0;
}