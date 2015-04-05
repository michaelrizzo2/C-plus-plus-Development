//This file contains  implementations of the member functions prototyped in GradeBook header file
#include "stdafx.h"
#include "GradeBook.h"
#include<iostream>
#include<string>
using namespace std;

Gradebook::Gradebook(string name)
{
	setCourseName(name);
}

void Gradebook::setCourseName(string name)
{
	courseName = name;
}

string Gradebook::getCourseName()
{
	return courseName;
}

void Gradebook::displayMessage()
{
	cout << "Welcome to the gradebook for \n" << getCourseName() << endl;
}

