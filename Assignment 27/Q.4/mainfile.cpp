#include<stdio.h>
/*4. Write generic program to accept N values and search last occurrence of any specific value.*/

template<class T>
T Count(T *arr,int iSize,T no)
{
	
	int i = 0, j = 0, iCnt = 0;

	for(i=0;i<iSize-1;i++)
	{
		if(arr[i] == no)
		{
			j = i;
		}
	}

	return j;
	
	
}
int main()
{
	int arr[] = {30,20,30,10,40,10,50};
	
	int iRet = Count(arr,7,10);
	printf("Counter is : %d", iRet);

	

	return 0;
}