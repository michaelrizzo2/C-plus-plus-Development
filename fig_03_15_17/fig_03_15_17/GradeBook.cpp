#include<iostream>

using namespace std;

#include "GradeBook.h";

Gradebook::Gradebook(string name)
{
	setCourseName(name);
}

void Gradebook::setCourseName(string name)
{
	if (name.length() <= 25)
	{
		courseName = name;
	}

	else if (name.length()>25)
	{
		courseName = name.substr(0, 25);
		
		cout << name << "exceeds the maximum length of 25 characters" << endl;

		cout << "new name is " << courseName << endl;
	}
}

string Gradebook::getCourseName()
{
	return courseName;
}

void Gradebook::displayMessage()
{
	cout << "Welcome to the gradebook for\n" << getCourseName() << endl;
}

