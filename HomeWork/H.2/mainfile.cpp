#include<stdio.h>
#include"myheader.h";
int main()
{
	char str[30] = {'\0'};
	char ch = 't';
	int iCapital = 0;
	int iSmall = 0;
	int space = 0;
	int vowel = 0;
	int difffreque = 0;
	int firstposition = 0;

	//printf("Enter the character");
	//scanf("%c",&ch);

	printf("Enter the String\n");
	scanf("%[^'\n']s",str);
	
	//-------------------------------------------------------------
	iCapital = CapitalCharacter(str);
	printf("No of Capital Character is %d",iCapital);
	printf("\n");
	//-------------------------------------------------------------
	iSmall = SmallCharacter(str);
	printf("No of Small Character is %d",iSmall);
	printf("\n");
	//-------------------------------------------------------------
	space = WhiteSpaces(str);
	printf("No of White Spaces is %d",space);
	printf("\n");
	//--------------------------------------------------------------
	vowel = VOWELS(str);
	printf("No of VOWEL is %d",vowel);
	printf("\n");
	//--------------------------------------------------------------
	difffreque = DeffFrequency(str);
	printf("frequency of capital and small character is %d",difffreque);
	printf("\n");
	//--------------------------------------------------------------
	firstposition = FirstCharacter(str,ch);
	printf("Position of first character is %d",firstposition);
	printf("\n");
	//--------------------------------------------------------------
	DisplayReverse(str);

	return 0;
}