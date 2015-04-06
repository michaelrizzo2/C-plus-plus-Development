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

void GradeBook::displayMessage()
{
	cout << "Welcome to the gradebook for " << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage()
{
	int sum_of_grades;
	int grade_counter;//keeps track of the grade number we are on
	int grade;//grade to be inputted
	int average;

	sum_of_grades = 0;//this will initialize the grade sum variable to sum up all of the grades.
	grade_counter = 1;//initializes the grade counter to sum up all of the grade inputs

	//This is where all of the summing of the grades will be done
	while (grade_counter <= 10)
	{
		cout << "Enter Grade:" << endl;
		cin >> grade;
		sum_of_grades += grade;
		grade_counter++;
	}

	average = sum_of_grades / 10;

	cout << "The total of all 10 grades is " << sum_of_grades << endl;

	cout << "The class average is " << average << endl;
	
}

