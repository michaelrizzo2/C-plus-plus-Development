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

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for " <<getCourseName() << endl;
}

void GradeBook::determineClassAverage()
{
	//This will set up the variables
	int total;//This will be for the sum of the grades entered by the user
	int gradecounter;//This will be for the number of the grades entered by the user
	int grade;//This will be for the grade entered by the user
	double average;//This will be for the average of the grades

	//This will initialize the variables for the while loop to accept the grades
	total=0;
	gradecounter=0;

	//This will ask for the grade from the user to begin the while loop
	cout << "Enter Grade or -1 to quit" << endl;
	cin >> grade;
	//This will sum up the grades and the number of grades when the grade inputted
	while (grade!=-1)
	{
		total += grade;
		gradecounter++;
		//next we need to prompt for the user for grade input
		cout << "Enter Grade or -1 to quit" << endl;
		cin >> grade;
	}

	//This next if loop will calculate the average
	if (gradecounter != 0)
	{
		//This will calculate the average of the grades
		average = static_cast<double> (total) / gradecounter;
		// display total and average with 2 digits of precision
		cout << "Total of all " << gradecounter << " grades entered is " << total << endl;
		cout << "class average is " << setprecision(2) << fixed << average << endl;
	}


}