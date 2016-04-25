// Scott Bingham
// HW 5 Ex. 05 (11.13)
// 4/7/16
// Dr. Matthew Bell
#include<iostream>
#include<string>
#include "Course.h"
using namespace std;
int main()
{
	string Bobby; // creates a student named Bobby
	string Freddie; // creates a student named Freddie
	string Joey; // creates a student named Joey
	Course DiffEQ; // creates a course named DiffEQ
	DiffEQ.addStudent(Bobby); // adds Bobby to the DiffEQ class
	DiffEQ.addStudent(Freddie); // adds Freddie to the DiffEQ class
	DiffEQ.addStudent(Joey); // adds Joey to the DiffEQ class
	DiffEQ.dropStudent(Bobby); // removes Bobby from the DiffEQ class
	DiffEQ.getStudents(); // displays the students in the course
	return 0;
}