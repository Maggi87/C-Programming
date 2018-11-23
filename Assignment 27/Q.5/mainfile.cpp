#include<stdio.h>
/*5. Write generic program to accept N values and reverse the contents.*/

template<class T>
void Reverse(T *arr,int iSize)
{
	int i = 0;
	for(i=iSize-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}	
}
int main()
{
	int arr[] = {30,20,30,10,40,10,50};	
	Reverse(arr,7);
	return 0;
}