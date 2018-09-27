#include<stdio.h>
#include"myheader.h";
int CapitalCharacter(char *arr)
{
	int iCapital = 0;
	while(*arr!='\0')
	{
		if((*arr>='A')&&(*arr<='Z'))
		{
			iCapital++;
		}
		arr++;
	}
	return iCapital;

}

int SmallCharacter(char *arr)
{
	int iSmall = 0;
	while(*arr!='\0')
	{
		if((*arr>='a')&&(*arr<='z'))
		{
			iSmall++;
		}
		arr++;
	}
	return iSmall;	
}

int WhiteSpaces(char *arr)
{
	int iSpace = 0;
	while(*arr!='\0')
	{
		if((*arr==' '))
		{
			iSpace++;
		}
		arr++;
	}
	return iSpace;	
}

int VOWELS(char *arr)
{
	int vowel = 0;
	while(*arr!='\0')
	{
		if((*arr=='a')||(*arr=='A')||(*arr=='e')||(*arr=='E')||(*arr=='i')||(*arr=='I')||(*arr=='o')||(*arr=='O')||(*arr=='u')||(*arr=='U'))
		{
			vowel++;
		}
		arr++;
	}
	return vowel;
}

int DeffFrequency(char *arr)
{
	int iCapital = 0, iSmall = 0;
	while(*arr!='\0')
	{
		if((*arr>='A')&&(*arr<='Z'))
		{
			iCapital++;
		}
		else if((*arr>='a')&&(*arr<='z'))
		{
			iSmall++;
		}
		arr++;
	}
	return iCapital-iSmall;
}

int FirstCharacter(char *arr,char ch)
{
	int iCnt = 0;
	while(*arr!='\0')
	{
		
		if(*arr==ch)
		{			
			break;
		}
		iCnt++;
		arr++;
	}
	return iCnt;
}

void DisplayReverse(char *arr)
{
	int i= 0, iLenght = 0;		

	while(*arr!='\0')
	{
		iLenght++;
		arr++;
	}

	i=0;
	i=iLenght;
	while(i>=0)
	{
		printf("%c",*arr);
		arr--;
		i--;
	}
	printf("\n");
}

char *DisplayReverseInMain(char *arr)
{
	int i= 0, iLenght = 0;		

	while(*arr!='\0')
	{
		iLenght++;
		arr++;
	}

	i=0;
	i=iLenght;
	while(i>=0)
	{
		printf("%c",*arr);
		arr--;
		i--;
	}
	return *arr;
	printf("\n");
}