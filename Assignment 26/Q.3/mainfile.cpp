#include<stdio.h>
/*3: Write generic program to accept N values from user and return addition of that values.*/

template<class T>
T MaxN(T *arr,int iSize)
{
	T sum = 0;
	int i = 0;

	for(i=0;i<iSize;i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}
int main()
{
	int iArr[] = {10,20,30,40,50,60};
	float fArr[] = {10.02,20.02,30.03,40.04,50.05,60.06};

	int iRet = MaxN(iArr,6);
	printf("Addition is : %d \t",iRet);

	printf("\n");

	float fRet = MaxN(fArr,6);
	printf("Addition is : %f \t",fRet);

	return 0;
}