#include<iostream>
using namespace std;
#include "GradeBook.h"
int main()

{
		//we need to create two gradebook objects
	Gradebook gradebook1("CS101 introduction to C++");
	Gradebook gradebook2("C++ Data Structures");

	cout << "the name of the first gradebook is " << gradebook1.getCourseName() << endl;
	cout << "the name of the second gradebook is " << gradebook2.getCourseName() << endl;
}
