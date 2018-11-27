#include<stdio.h>
/*  3. Write a program which accept number from user and return its factorial using
	recursive approach.
	Input : 4
	Output : 24
*/

int FactR(int iNo)
{
	static int Ans = 1;
	
	if(iNo!=1)
	{		
		Ans = Ans * iNo;
		iNo--;
		FactR(iNo);
	}

	return Ans;
}
int main()
{
	int iRet = FactR(4);
	printf("%d",iRet);
	return 0;
}