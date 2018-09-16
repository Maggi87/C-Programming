#include<stdio.h>
#include"myheader.h";
int main()
{
	int brr[10] = {0};
	int i = 0, no = 0; 
	int iRet = 0;

	printf("Enter the number");
	scanf("%d",&no);

	printf("Enter the Array");
	for(i = 0; i < no; i++)
	{
		scanf("%d",&brr[i]);
	}

	iRet = addition(brr, no);

	printf("Minimum Number is %d",iRet);
	return 0;


}

