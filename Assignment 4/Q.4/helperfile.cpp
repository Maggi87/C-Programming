/*
	4. Accept one numbers from user and display the output as.
*/

#include<stdio.h>
#include"myheader.h";


void DisplayNo(int iNo)
{
	int lDigit = 0;

	if(iNo < 0)
	{
		iNo = - iNo;
	}
	

	while(iNo!=0)
	{
		lDigit = iNo % 10;
		
		switch(lDigit)
		{
			case 0:
				printf("Zero");
				break;
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;
			default:
				printf("Invalid Input");
		}
		
		iNo = iNo / 10;
	}
}
