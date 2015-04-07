#include<iostream>
#include<iomanip>//used to set precision of output numbers
using namespace std;

#include"GradeBook.h"

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
		courseName = name.substr(0, 25);
		cout << "The class name of " << name << "is too long" << endl;
	}
}


