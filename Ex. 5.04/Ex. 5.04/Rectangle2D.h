#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle2D
{
private: 
	double x;
	double y;
	double width;
	double height;
	double area;
	double perimeter;
public: 
	Rectangle2D() // no argument constructor
	{
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double newx, double newy, double newwidth, double newheight) // constructor
	{
		this->x = newx;
		this->y = newy;
		this->width = newwidth;
		this->height = newheight;
	}
	double getx() // getx function
	{
		return x;
	}
	double setx(double newx) // setx function
	{
		this->x = newx;
	}
	double gety() // get y function
	{
		return y;
	}
	double sety(double newy) // set y function
	{
		this->y = newy;
	}
	double getwidth() // get width function
	{
		return width;
	}
	double setwidth(double newwidth) // set width function
	{
		this->width = newwidth;
	}
	double getheight() // get height function
	{
		return height;
	}
	double setheight(double newheight) // set height function
	{
		this->height = newheight;
	}
	double getArea() // get area function
	{
		return area;
	}
	double setArea(double newarea) // set area function
	{
		newarea = width * height; // computes area of rectangle
		area = newarea;
	}
	double getPerimeter() // get perimeter function
	{
		return perimeter;
	}
	double setPerimeter(double newperimeter) // set perimeter function
	{
		newperimeter = (2 * width) + (2 * height); // computes perimeter of rectangle
		perimeter = newperimeter;
	}
	bool contains(double x, double y) // checks to see if the specified point is inside the rectangle
	{
		if ((x > (x - width)) && (x < (x + width)) && (y >(y - height)) && (y < (y + height)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool contains(const Rectangle2D &r) // checks to see if the specified rectangle is inside another rectangle
	{
		if ((x > (x - width)) && (x < (x + width)) && (y >(y - height)) && (y < (y + height)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool overlaps(const Rectangle2D &r) // checks to see if the specified rectangle overlaps with another rectangle
	{
		if ((x > (x - width)) || (x < (x + width)) || (y >(y - height)) || (y < (y + height)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
#endif
