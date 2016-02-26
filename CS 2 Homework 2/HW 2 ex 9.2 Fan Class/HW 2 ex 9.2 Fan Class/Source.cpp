// Scott Bingham
// Dr. Matthew Bell
// HW 02 Ex 01 
// The Fan class 9.2
// 2/18/16
#include<iostream>
#include<string>
#include"Fan.h"
using namespace std;
int main()
{
	fan f1; // create new variables using the fan class
	fan f2;
	int speed1 = 3;
	int speed2 = 2;
	bool on1 = true;
	bool on2 = false;
	double radius1 = 10.0;
	double radius2 = 5.0;
	f1.changeSpeed(speed1); // changes fan 1 speed to 3
	cout << "Fan 1 speed is: " << f1.getSpeed() << endl; // outputs fan 1 speed
	f1.changeOn(on1); // changes fan 1 on/off to on
	cout << "Fan 1 is turned: " << f1.getOn() << " (1 for on and 0 for off)" << endl; // outputs fan 1 on
	f1.changeRadius(radius1); // changes fan 1 radius to 10
	cout << "Fan 1 has radius: " << f1.getRadius() << endl; // outputs fan 1 radius
	f2.changeSpeed(speed2); // changes fan 2 speed to 2
	cout << "Fan 2 speed is: " << f2.getSpeed() << endl; // outputs fan 2 speed
	f2.changeOn(on2); // changes on/off to off
	cout << "Fan 2 is turned: " << f2.getOn() << " (1 for on and 0 for off)" << endl; // outputs fan 2 on/off
	f2.changeRadius(radius2); // changes fan 2 radius
	cout << "Fan 2 has radius: " << f2.getRadius() << endl; // outputs fan 2 radius
	return 0;
}