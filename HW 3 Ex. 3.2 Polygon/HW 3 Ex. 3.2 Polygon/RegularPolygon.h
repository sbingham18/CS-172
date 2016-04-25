#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H
#include<iostream>
using namespace std;
class RegularPolygon // Create a class named Regular Polygon
{
private: // set private variables
	int n;
	double side;
	double x;
	double y;
public: // set public functions
	double RegularPolygonOne();
	double RegularPolygonTwo(int n, double side);
	double RegularPolygonThree(int n, double side, double x, double y);
	void setn(int N);
	double getn();
	void setside(int Side);
	double getside();
	void setx(double X);
	double getx();
	void sety(double Y);
	double gety();
	double getPerimeter();
	double getPerimeterPolygon2();
	double getPerimeterPolygon3();
	double getArea();
	double getAreaPolygon2();
	double getAreaPolygon3();
};
#endif