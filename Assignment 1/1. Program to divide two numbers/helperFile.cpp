#include"myheader.h"
double Divide(double iValue1, double iValue2)
{
	double iAns = 0;
	if(iValue2 <= 0)
	{
		return ERR_DIVIDE_BY_ZERO;
	}

	iAns = (double)iValue1/(double)iValue2;

	return iAns;
}