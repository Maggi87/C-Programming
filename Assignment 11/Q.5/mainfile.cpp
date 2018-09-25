#include<stdio.h>
#include<stdlib.h>
#include"myheader.h";
int main()
{
	int i=0, aLenght = 0;
	float *arr = NULL;	

	printf("Enter the No. of Student");
	scanf("%d",&aLenght);

	arr = (float*)calloc(aLenght,sizeof(float));
	
	if((arr==NULL))
	{
		printf("Enabled allocate Memory");
		return -1;
	}
	
	printf("Enter the Marks of Student");
	for(i = 0; i<aLenght; i++)
	{
		scanf("%f",&arr[i]);
	}
	
	Percentage(arr,aLenght);
	free(arr);	
	return 0;
}