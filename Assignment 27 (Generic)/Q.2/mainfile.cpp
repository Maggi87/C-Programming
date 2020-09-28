#include<stdio.h>
/*2. Write generic program to accept N values and count frequency of any specific
value.*/

template<class T>
T Count(T *arr,int iSize,T no)
{
	
	int i = 0, iCnt = 0;

	for(i=0;i<iSize;i++)
	{
		if(arr[i] == no)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int arr[] = {10,20,30,10,40,10,50};
	
	int iRet = Count(arr,7,10);
	printf("Counter is : %d", iRet);

	

	return 0;
}
