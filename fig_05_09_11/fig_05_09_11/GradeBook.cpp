#include<iostream>
using namespace std;

#include "GradeBook.h"

//The gradebook constructor will set the course name and initialize the number of A's B's C'd D's and F's
GradeBook::GradeBook(string name)
{
	setCourseName(name);
	number_of_a_grades = 0;
	number_of_b_grades = 0;
	number_of_c_grades = 0;
	number_of_d_grades = 0;
	number_of_f_grades = 0;
}

void GradeBook::setCourseName(string name)
{
	if (name.length()<=25)
	{ 
		courseName = name;
	}

	else
	{
		//we will trim the course name if it is longer than 25 characters
		courseName = name.substr(0, 25);
		cout << "Name" << name << " is longer than 25 characters " << endl;
	}

}

string GradeBook::getCourseName()
{
	return courseName;
}