#include<stdio.h>
/*2.Write generic program to find largest number from three numbers.*/

template<class T>
T Max(T no1,T no2,T no3)
{
	T max;
	max = no1;
	
	if(no1>max)
	{
		max = no1;
	}
	if(no2>max)
	{
		max = no2;
	}
	if(no3>max)
	{
		max = no3;
	}
	return max;
}
int main()
{
	int iRet = Max(110,20,24);
	printf("Max no is :- %d \t",iRet);

	printf("\n");

	float fRet = Max(210.3f,20.2f,50.0f);
	printf("Max no is :- %f \t",fRet);

	return 0;
}