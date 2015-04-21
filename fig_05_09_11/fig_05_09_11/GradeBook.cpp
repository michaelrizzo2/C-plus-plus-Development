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

void GradeBook::displayMessage()
{
	cout << "Welcome to the gradebook for " << getCourseName() << endl;
}

void GradeBook::input_grades()
{
	int grade;//grade entered by user
	cout << "Enter the letter grades" << endl << "enter the EOF character to end input" << endl;

	//This will loop until the user types the end of file sequence.
	while ((grade = cin.get()) != EOF)
	{
		//this will determine which grade was entered
		switch (grade)
		{
			case 'A':
			case 'a':
				number_of_a_grades++;
				break;

			case 'B':
			case 'b':
				number_of_b_grades++;
				break;

			case 'C':
			case 'c':
				number_of_c_grades++;
				break;

			case 'D':
			case 'd':
				number_of_d_grades++;
				break;

			case 'F':
			case 'f':
				number_of_f_grades++;

			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout << "Incorrect leter grade entered " << "enter a new grade" << endl;
				break;
		}
	}
}

void GradeBook::displayGradeReport()
{
	cout << "Number of students that received letter grade" << endl;
	cout << "The number of A's is " << number_of_a_grades << endl;
	cout << "The number of B's is " << number_of_b_grades << endl;
	cout << "The number of C's is " << number_of_c_grades << endl;
	cout << "The number of D's is " << number_of_d_grades << endl;
	cout << "The number of F's is " << number_of_f_grades << endl;
}