#include<iostream>

using namespace std;

#include "GradeBook.h"

//Gradebook Constructor
GradeBook::GradeBook(string name)
{
	setCourseName(name);//this will store the coursename
}

//this will make sure the course name has no more than 25 characters
void GradeBook::setCourseName(string name)
{
	if (name.length() <= 25)
	{
		courseName = name;
	}

	else
	{
		courseName = name.substr(0, 25);
		cout << "The name" << name << "exceeds the maximum length of 25 characters" << endl;
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}



