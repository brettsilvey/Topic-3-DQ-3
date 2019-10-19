#ifndef QUAD_H
#define QUAD_H
#include <iostream>
#include <cmath>
using namespace std;
/*
Implement a class that models a quadratic equation. The constructor should receive coefficients a, b, and c for the equation. 
Include member functions getSolution1() and getSolution2() that calculate and return the solutions, using the quadratic formula. 
0 is returned if no solution exists. getSolution1() should return the smaller of the two solutions. 
Supply a function that returns false if the discriminant is negative. Post a screenshot of your .h AND .cpp file here.
*/

class Quadratic {
private:
	//data members
	double coeffA;
	double coeffB;
	double coeffC;
	double getDescriminant() const;

public:
	Quadratic(double a, double b, double c);
	double getSolution1() const;
	double getSolution2() const;
	bool hasRealSolution() const;

	friend ostream& operator<<(ostream & o, const Quadratic & d);
};
#endif // QUAD_H
