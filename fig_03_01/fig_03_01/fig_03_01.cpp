// fig_03_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

class GradeBook
{
	public:
		//This will display a welcome message to the user
		void displayMessage()
		{
			cout << "Welcome to the gradebook" << endl;
		}
};

int main()
{
	GradeBook mygradebook;
	mygradebook.displayMessage();
	return 0;
}
