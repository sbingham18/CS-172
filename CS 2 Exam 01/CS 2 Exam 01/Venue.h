// I affirm that all code given below was written solely by me, Scott Bingham, and that any help I received adhered to the rules stated for this exam.
#ifndef VENUE_H
#define VENUE_H
#include "Event.h"
using namespace std;
class Venue
{
private:
	int numEvent;
	Event scheduledEvents[12];
	bool validTime(int time);
public:
	Venue();
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);
};
#endif
