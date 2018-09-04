//10. Accept range from user and print all numbers between that range in reverse order.
#include<stdio.h>
int main()
{
	int iNo1 = 0, iNo2 = 0, iRet = 0;

	printf("Enter the two number");
	scanf("%d %d",&iNo1, &iNo2);

	DisplayRangeRev(iNo1,iNo2);

	return 0;
} 


