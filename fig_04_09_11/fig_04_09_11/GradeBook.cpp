#include<iostream>
#include<iomanip>//This will set the accuracy of the output
//This will include all of the functions in the gradebook header file
#include "GradeBook.h"
//This will be for the constructor which will set the string arguement
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
	
	if (name.length() <= 25)
	{
		courseName = name;
	}

	else
	{
		//Thiis will be when the name of the course is longer than 25 characters
		courseName = name.substr(0, 25);
		cout << "Name" << name << "is longer than 25 characters" << "limiting course name to 25 characters" << endl;
	}
}