#include<iostream>
using namespace std;
#include "Analysis.h"

//This will process the examination results for the 10 students
void Analysis::processExamResults()
{
	//The first step is to initialize the variable declarations
	int number_of_students_passed = 0;
	int number_of_students_failed = 0;
	int studentcounter = 0;
	int result;
	while (studentcounter<=10)
	{
		//This will ask for the grade from the user
		cout << "Enter 1 for pass or 2 for fail" << endl;
		cin >> result;
		// this will check for passes or failures
		if (result == 1)
		{
			number_of_students_passed++;
		}

		else if (result ==2)
		{
			number_of_students_failed++;
		}

		//This will increment the student counter
		studentcounter++;

	}
	//This will the num
	if (number_of_students_passed > 8)
	{
		cout << "Raise Tuition" << endl;
	}
}