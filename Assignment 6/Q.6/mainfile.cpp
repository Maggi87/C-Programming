#include<stdio.h>
#include"myheader.h";
int main()
{
	
	int no = 0; 
	char ch;

	printf("Enter the number");
	scanf("%d",&no);

	printf("Enter the character");
	scanf("%c",&ch);

	Pattern(no,ch);
	return 0;
}

