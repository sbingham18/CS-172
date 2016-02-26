#ifndef FAN_H
#define FAN_H
class fan
{
private:
	int speed; // integer because it can only be 1, 2, or 3
	bool on; // bool so on = true and off = false
	double radius; // double because radius can be a decimal
public:
	fan() // constructor that sets initial values  
	{
		speed = 1;
		on = false;
		radius = 5;
	};
	int getSpeed() // get speed function
	{
		return speed;
	}
	void changeSpeed(int newSpeed) // change speed function
	{
		speed = newSpeed;
	}
	bool getOn()
	{
		return on;
	}
	void changeOn(bool newOn) // change on function
	{
		on = newOn;
	}
	double getRadius() // get radius function
	{
		return radius;
	}
	void changeRadius(double newRadius) // change radius function
	{
		radius = newRadius;
	}
};
#endif
