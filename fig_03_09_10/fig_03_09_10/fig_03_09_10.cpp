// fig_03_09_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Gradebook.h"
#include<iostream>
using namespace std;

int main()
{
	GradeBook gradebook1("CS101 introduction to c++");
	cout << "The course for gradebook 1 is " << gradebook1.getCourseName() << endl;
	return 0;
}



