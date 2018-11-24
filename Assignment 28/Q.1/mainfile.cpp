#include<stdio.h>
/*  1.Write a program which accept character from user and print that character 4 times
	using recursive approach.
	Input : M
	Output : M M M M
*/

void DisplayR(char ch)
{
	
	static int i = 1;

	if(i<=4)
	{
		printf("%c",ch);
		i++;
		DisplayR(ch);
	}
	
}
int main()
{
	DisplayR('M');
	return 0;
	return 0;
}