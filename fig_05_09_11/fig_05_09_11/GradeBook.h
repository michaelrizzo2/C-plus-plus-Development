//THis version of gradebook will count the number of A's B's C's D's and F's
#include<string>
using namespace std;
//Grade Book class definition
class GradeBook
{
	public:
		GradeBook(string);//Course constructor
		void setCourseName(string);
		string setCourseName();
		void displayMessage();
		void input_grades();
		void displayGradeReport();


};