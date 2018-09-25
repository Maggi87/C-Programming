#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int i=0, aLenght = 0;
	char *arr = NULL;
	char ch;
	int iRet = 0;	

	printf("Enter the Character");
	scanf("%c",&ch);

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
	
	iRet = Search(arr,aLenght,ch);
	Display(iRet);
	
	free(arr);	
	return 0;
}