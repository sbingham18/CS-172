// Scott Bingham
// HW 3 Ex. 3.2 Regular Polygon
// 3/15/16
// Dr. Matthew Bell
#include<iostream>
#include"RegularPolygon.h"
#include<cmath>
using namespace std;
int main()
{
	// Create variables R1, R2, and R3 with the variable type of the class RegularPolygon
	RegularPolygon R1; 
	RegularPolygon R2;
	RegularPolygon R3;
	R1.RegularPolygonOne();
	cout << "The area of R1 is: " << R1.getArea() << endl; // calls get area function and outputs area
	cout << "The perimeter of R1 is: " << R1.getPerimeter() << endl; // calls get perimeter function and outputs perimeter
	R2.RegularPolygonTwo(6, 4);
	cout << "The area of R2 is: " << R2.getAreaPolygon2() << endl; // calls get area function and outputs area
	cout << "The perimeter of R2 is: " << R2.getPerimeterPolygon2() << endl; // calls get perimeter function and outputs perimeter
	R3.RegularPolygonThree(10, 4, 5.6, 7.8);
	cout << "The area of R3 is: " << R3.getAreaPolygon3() << endl; // calls get area function and outputs area
	cout << "The perimeter of R3 is: " << R3.getPerimeterPolygon3() << endl; // calls get perimeter function and outputs perimeter
	return 0;
}