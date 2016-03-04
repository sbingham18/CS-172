// I affirm that all code given below was written solely by me, Scott Bingham, and that any help I received adhered to the rules stated for this exam.
#include<iostream>
#include<string>
#include<iomanip>
#include "Venue.h"
#include "Event.h"
using namespace std;
Venue::Venue()
{
	numEvent = 12; // there can be a total of 12 events
	scheduledEvents[numEvent];
};
void Venue::addEvent(int time, string name)
{
	if (validTime(time) == true) //calls the valid time function and checks if the time slot is open
	{
		scheduledEvents[time - 1].setTitle(name); // sets the name to that event
		scheduledEvents[time - 1].setTime(time); // sets the time to that event
		cout << "Event Scheduled! " << endl; // Lets user know the event has been scheduled
	}
	else // if the time slot is not open
	{
		cout << "Couldn't schedule event :(" << endl; // lets user know the event could not be scheduled
	}
}
bool Venue::validTime(int time) // checks to see if time slots are open
{
	if (scheduledEvents[time - 1].getTime() == -1)// if time slot is free the program returns true
	{
		return true;
	}
	else // if time slot is full the program returns false
	{
		return false;
	}
}
Event Venue::findEvent(int time) // function for finding event if user enters time
{
	return scheduledEvents[time - 1];
}
Event Venue::findEvent(string name) // function for finding time of event if user enters name of event
{
	for (int count = 0; count < 12; count++)
	{
		if (name == scheduledEvents[count].getTitle()) // if name is equal to event name at the give time
		{
			return scheduledEvents[count];
			break;
		}
	}
	cout << "-1";
}