#include<stdio.h>
/*5. Write generic program to accept N values from user and return largest values.*/

template<class T>
T Max(T *arr,int iSize)
{
	T min ;
	int i = 0;
	min = arr[i];
	for(i=0;i<iSize;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}			
	}

	return min;
}
int main()
{
	int iArr[] = {10,20,130,40,50,60};

	float fArr[] = {10.02,20.02,30.03,40.04,150.05,60.06};

	int iRet = Max(iArr,6);
	printf("Minimum no is : %d \t",iRet);

	printf("\n");

	float fRet = Max(fArr,6);
	printf("Minimum no is : %f \t",fRet);

	return 0;
}