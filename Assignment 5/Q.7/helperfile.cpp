/*
	7 . Accept rad ius of c irc le from user and ca lcu late its
circumference (2*PI*R).
*/

#include<stdio.h>
#include"myheader.h";

float AreaCircle (float fRadious)
{
	float pi = 3.14159;
	float circumference = 0.0f;

	circumference = 2 * pi * fRadious;

	return circumference;	
}


