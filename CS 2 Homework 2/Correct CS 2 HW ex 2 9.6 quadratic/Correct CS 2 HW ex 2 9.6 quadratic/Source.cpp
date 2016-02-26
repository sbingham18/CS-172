// Scott Bingham
// HW 2 Ex. 9.6 Algebra: Quadratic Equations
// Dr. Bell
// 2/23/16
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include"Class.h"
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	// prompts user to enter 3 integers
	cout << "Enter a number for a: ";
	cin >> a;
	cout << endl;
	cout << "Enter a number for b: ";
	cin >> b;
	cout << endl;
	cout << "Enter a number for c: ";
	cin >> c;
	cout << endl;
	QuadraticEquation quad1; // creates a variable using quadratic equation class
	// gets values for a, b, and c
	quad1.seta(a);
	quad1.setb(b);
	quad1.setc(c);
	double discriminant = quad1.getDiscriminant(a, b, c); // calculates discriminant
	// if discriminant = 0 then the + or - does not make a difference, causing there to only be one root
	if (discriminant == 0)
	{
		cout << "The one root is: " << quad1.getRoot1(a, b, c); // outputs the one root
		cout << endl;
	}
	// if discriminant is positive then there will be 2 roots
	else if (discriminant > 0)
	{
		// outputs 2 roots
		cout << "The two roots are: " << quad1.getRoot1(a, b, c) << " and " << quad1.getRoot2(a, b, c);
		cout << endl;
	}
	// if discriminant is negative there will be no real roots
	else
	{
		cout << "The equation has no real roots. " << endl;
	}
	return 0;
}