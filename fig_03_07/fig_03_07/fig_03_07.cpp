// fig_03_07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Gradebook
{
	public:
		Gradebook(string name)
		{
			setCourseName(name);
		}

		void setCourseName(string name)
		{
			courseName = name;
		}
		string getCourseName()
		{
			return courseName;
		}

		void displayMessage()
		{
			cout << "Welcome to the gradebook for" << getCourseName() << endl;
		}
	private:
		string courseName;


};
int main()
{
	Gradebook gradeBook1("CS 101");
	Gradebook gradeBook2("Algorithms 2");
	cout << "The coursename for gradebook 1 is " << gradeBook1.getCourseName() << endl;
	return 0;
}
