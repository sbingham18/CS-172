#ifndef COURSE_H
#define COURSE_H
#include<string>
using namespace std;
class Course
{
private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
public:
	Course(const string& courseName, int capacity) // constructor
	{
		numberOfStudents = 0;
		this->courseName = courseName;
		this->capacity = capacity;
		students = new string[capacity];
	}
	Course() // destructor
	{
		delete[] students;
	}
	string getCourseName() const // function that gets name of course
	{
		return courseName;
	}
	void addStudent(const string& name) // function that adds students to a class
	{
		students[numberOfStudents] = name;
		numberOfStudents++; // adds one to the total of students
		if (numberOfStudents > capacity) // checks to see if the number of students in the class exceeds the maximum capacity
		{
			int newDoubleCapacity = (2 * capacity); // if it does exceed maximum capacity, it creates a new array that is double the size of the last one
			students = new string[newDoubleCapacity];
		}
	}
	void dropStudent(const string& name) // function that drops a student from a class
	{
		students[numberOfStudents] = name;
		numberOfStudents--;
	}
	string* getStudents() const // function that outputs what students are in the class
	{
		return students;
	}
	int getNumberOfStudents() const // function that outputs number of students in the class
	{
		return numberOfStudents;
	}
	void clear() // removes all students from the course
	{
		numberOfStudents = 0;
	}
};
#endif
