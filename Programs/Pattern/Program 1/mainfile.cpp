#include<stdio.h>
#include"myheader.h";
int main()
{
	int iNo = 0;
	int iNo1 = 0;

	printf("Enter the First and Second Number");
	scanf("%d %d",&iNo,&iNo1);

	pattern1(iNo);
	pattern2(iNo);
	pattern3(iNo);
	pattern4(iNo);
	pattern5(iNo);
	pattern6(iNo,iNo1);
	pattern7(iNo);

	return 0;
}