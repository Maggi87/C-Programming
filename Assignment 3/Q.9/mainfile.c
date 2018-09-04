//9. Accept range from user and addition of all numbers between that range.


#include<stdio.h>

int main()
{
	int iNo1 = 0, iNo2 = 0, iRet = 0;

	printf("Enter the two number");
	scanf("%d %d",&iNo1, &iNo2);

	iRet = SumRange(iNo1,iNo2);

	printf("Sum of Range %d", iRet);

	return 0;
} 


