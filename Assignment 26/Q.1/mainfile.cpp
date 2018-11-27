#include<stdio.h>
/*1.Write generic program to multiply two numbers.  */
template<class T>
T Multiply(T no1,T no2)
{
	T ans;

	ans = no1 * no2;
	return ans;
}
int main()
{
	int iRet = Multiply(10,20);
	printf("Mutiplication is :- %d \t",iRet);

	printf("\n");

	float fRet = Multiply(10.3f,20.2f);
	printf("Mutiplication is :- %f \t",fRet);

	return 0;
}