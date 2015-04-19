#include"GradeBook.h"

int main()
{
	//Create Gradebook Object and pass coucse name to constructor
	GradeBook myGradeBook("CS101 Python Programming");
	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
}