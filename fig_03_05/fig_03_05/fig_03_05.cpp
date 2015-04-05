// fig_03_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
	public:
		void setCourseName(string name)
		{
			coursename = name;
		}
		string getCourseName()
		{
			return coursename;
		}

		void displayMessage()
		{
			cout << "Welcome to the gradebook for \n" << getCourseName() << endl;
		}
	private:
		string coursename;
};

int main()
{
	string nameofcourse;
	GradeBook myGradeBook;
	cout << "Initial course name is:" << myGradeBook.getCourseName() << endl;
	getline(cin, nameofcourse);
	myGradeBook.setCourseName(nameofcourse);
	myGradeBook.displayMessage();
}
