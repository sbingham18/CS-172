// Scott Bingham
// HW 5 Ex. 04 (11.9) Rectangle2D
// 4/7/16
// Dr. Matthew Bell
#include<iostream>
#include "Rectangle2D.h"
using namespace std;
int main()
{
	// creates 3 rectangles
	Rectangle2D r1(2, 2, 5.5, 4.9); 
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	cout << r1.getArea() << endl; // outputs area of rectangle 1
	cout << r1.getPerimeter() << endl; // outputs perimeter of rectangle 1
	cout << r1.contains(3, 3) << endl; // checks to see if this point is inside rectangle 1
	cout << r1.contains(r2) << endl; // checks to see if rectangle 2 is inside of rectangle 1
	cout << r1.overlaps(r3) << endl; // checks to see if rectangle 3 overlaps with rectangle 1
	return 0;
}