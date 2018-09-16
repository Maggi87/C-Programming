#include<stdio.h>
#include"myheader.h";
int main()
{
	
	int iStart = 0, iEnd = 0; 

	printf("Enter the Start and End number");
	scanf("%d %d",&iStart,&iEnd);

	Pattern(iStart,iEnd);
	return 0;
}

