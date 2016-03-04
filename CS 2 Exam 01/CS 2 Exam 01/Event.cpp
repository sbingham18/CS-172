// I affirm that all code given below was written solely by me, Scott Bingham, and that any help I received adhered to the rules stated for this exam.
#include<iostream>
#include<string>
#include<iomanip>
#include "Event.h"
#include "Venue.h"
using namespace std;
Event::Event() // default constructor that initializes time to -1 and title to free
{
	time = -1;
	title = "free";
}
Event::Event(int time, string name)
{
	time = time;
	title = name;
}
int Event::getTime() // function to get time of event
{
	return time;
}
string Event::getTitle() // function to get title of event
{
	return title;
}
void Event::setTime(int t) // function to set time of event
{
	time = t;
}
void Event::setTitle(string name) // function to set title of event
{
	title = name;
}