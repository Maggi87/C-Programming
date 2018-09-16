#include<stdio.h>
#include"myheader.h";
int main()
{
	float brr[10] = {0.0};
	int i = 0, no = 0; 

	printf("Enter the number");
	scanf("%f",&no);

	printf("Enter the Array");
	for(i = 0; i < 5; i++)
	{
		scanf("%f",&brr[i]);
	}

	DisplayFloat(brr, 5);
	return 0;
}

