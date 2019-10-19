#include "Quad.h"
#include <iostream>
using namespace std;

int main() {
	Quadratic d1(1, 0, 1);
	cout << "Numbers implemented: "<< d1 << endl;
	cout << "Solution 1: " << d1.getSolution1() << endl;
	cout << "Solution 2: " << d1.getSolution2() << endl;
	cout << "Is solution real? 1 = True, 0 = False: " <<d1.hasRealSolution() << endl;
}