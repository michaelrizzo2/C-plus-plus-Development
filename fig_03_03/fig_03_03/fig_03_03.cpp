// fig_03_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class GradeBook
{
	public:
		//This will display a welcome message to the gradebook user
		void displaymessage(string Coursename)
		{
			cout << "Welcome to the gradebook for the course"<<Coursename<<endl;
		}

};
int main()
{
	string nameOfCourse;
	GradeBook mygradebook;
	cout << "Please enter the course name" << endl;
	getline(cin, nameOfCourse);//read a input with blanks
	cout << endl;
	mygradebook.displaymessage(nameOfCourse);
	return 0;
}

