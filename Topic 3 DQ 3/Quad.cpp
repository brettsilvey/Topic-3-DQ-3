#include "Quad.h"
#include <cmath>

double Quadratic::getDescriminant() const
{
	return coeffB * coeffB - 4 * coeffA*coeffC;
}

Quadratic::Quadratic(double a, double b, double c)
{
	coeffA = a;
	coeffB = b;
	coeffC = c;
}

double Quadratic::getSolution1() const
{
	if (hasRealSolution() == false)
		return 0;
	else
		return (-1*coeffB - sqrt((coeffB*coeffB) - (4 * coeffA*coeffC))) / (2 * coeffA);
}

double Quadratic::getSolution2() const
{
	if (hasRealSolution() == false)
		return 0;
	else
		return(-1*coeffB + sqrt(coeffB*coeffB - 4 * coeffA*coeffC)) / (2 * coeffA);
}

bool Quadratic::hasRealSolution() const
{
	if (getDescriminant() < 0)
		return false;
	else
		return true;
}

ostream & operator<<(ostream & o, const Quadratic & d)
{
	// TODO: insert return statement here
	o << d.coeffA << "," << d.coeffB << "," << d.coeffC;
	return o;
}
