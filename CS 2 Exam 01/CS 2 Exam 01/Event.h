// I affirm that all code given below was written solely by me, Scott Bingham, and that any help I received adhered to the rules stated for this exam. 
#ifndef EVENT_H
#define EVENT_H
using namespace std;
class Event
{
private:
	int time;
	string title;
public:
	Event();
	Event(int time, string name);
	int getTime();
	string getTitle();
	void setTime(int t);
	void setTitle(string name);
};
#endif
