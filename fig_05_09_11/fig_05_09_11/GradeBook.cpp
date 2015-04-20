#include<iostream>
using namespace std;

#include "GradeBook.h"

//The gradebook constructor will set the course name and initialize the number of A's B's C'd D's and F's
GradeBook::GradeBook(string name)
{
	setCourseName(name);
	number_of_a_grades = 0;
	number_of_b_grades = 0;
	number_of_c_grades = 0;
	number_of_d_grades = 0;
	number_of_f_grades = 0;
}