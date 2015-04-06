#include<iostream>
using namespace std;
#include "GradeBook.h"
int main()

{
		//we need to create two gradebook objects
	Gradebook gradebook1("CS101 introduction to programming in C++");
	Gradebook gradebook2("C++ Data Structures");

	cout << "the name of the first gradebook is " << gradebook1.getCourseName() << endl;
	cout << "the name of the second gradebook is " << gradebook2.getCourseName() << endl;

	gradebook1.setCourseName("CS101 Intro to C++");
	cout << "the name of the first gradebook is " << gradebook1.getCourseName() << endl;
}
