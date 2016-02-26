#ifndef CLASS_H
#define CLASS_H
class QuadraticEquation
{
private:
	// doubles because the numbers can be decimals
	double a;
	double b;
	double c;
	double discriminant;
	double r1;
	double r2;
public:
	QuadraticEquation() // constructor that sets initial values
	{
		double a = 1;
		double b = 1;
		double c = 1;
	}
	void seta(double newA) // set a function
	{
		a = newA;
	}
	void setb(double newB) // set b function
	{
		b = newB;
	}
	void setc(double newC) // set c function
	{
		c = newC;
	}
	double getDiscriminant(double a, double b, double c) // takes three values entered and computes discriminant
	{
		discriminant = pow(b, 2) - 4 * a*c; // equation for the discriminant
		return discriminant;
	}
	double getRoot1(double a, double b, double c) // calculates root 1
	{
		r1 = ((-b + sqrt(discriminant)) / 2 * a); // quadratic equation with +
		return r1;
	}
	double getRoot2(double a, double b, double c) // calculates root 2
	{
		r2 = ((-b - sqrt(discriminant)) / 2 * a); // quadratic equation with -
		return r2;
	}
};
#endif

