#include<iostream>
#include"RegularPolygon.h"
#include <cmath>
#include<math.h>
using namespace std;
// constructors
double RegularPolygon::RegularPolygonOne()
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
	return n, side, x, y;
}
double RegularPolygon::RegularPolygonTwo(int n, double side)
{
	x = 0;
	y = 0;
	return n, side, x, y;
}
double RegularPolygon::RegularPolygonThree(int n, double side, double x, double y)
{
	return n, side, x, y;
}
// Accessor and mutator functions
void RegularPolygon::setn(int N)
{
	n = N;
}
double RegularPolygon::getn()
{
	return n;
}
void RegularPolygon::setside(int Side)
{
	side = Side;
}
double RegularPolygon::getside()
{
	return side;
}
void RegularPolygon::setx(double X)
{
	x = X;
}
double RegularPolygon::getx()
{
	return x;
}
void RegularPolygon::sety(double Y)
{
	y = Y;
}
double RegularPolygon::gety()
{
	return y;
}
// Get perimeter functions
double RegularPolygon::getPerimeter()
{
	double Perimeter = side * n;
	return Perimeter;
}
double RegularPolygon::getPerimeterPolygon2()
{
	n = 6;
	side = 4;
	x = 0;
	y = 0;
	double Perimeter = side * n;
	return Perimeter;
}
double RegularPolygon::getPerimeterPolygon3()
{
	n = 10;
	side = 4;
	x = 5.6;
	y = 7.8;
	double Perimeter = side * n;
	return Perimeter;
}
// Get area functions
double RegularPolygon::getArea()
{
	double Area = (n * side * side) / (4 * tan(3.141592653 / n));
	return Area;
}
double RegularPolygon::getAreaPolygon2()
{
	n = 6;
	side = 4;
	x = 0;
	y = 0;
	double Area = (n * side * side) / (4 * tan(3.141592653 / n));
	return Area;
}
double RegularPolygon::getAreaPolygon3()
{
	n = 10;
	side = 4;
	x = 5.6;
	y = 7.8;
	double Area = (n * side * side) / (4 * tan(3.141592653 / n));
	return Area;

}