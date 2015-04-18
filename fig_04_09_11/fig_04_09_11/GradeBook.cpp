#include<iostream>
#include<iomanip>//This will set the accuracy of the output
//This will include all of the functions in the gradebook header file
#include "GradeBook.h"
//This will be for the constructor which will set the string arguement
GradeBook::GradeBook(string name)
{
	setCourseName(name);
}
