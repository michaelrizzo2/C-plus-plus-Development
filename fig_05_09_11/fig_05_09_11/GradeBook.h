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
	private:
		string courseName;
		//These will be for the numbers of A's B's C's D's F's
		int number_of_a_grades;
		int number_of_b_grades;
		int number_of_c_grades;
		int number_of_d_grades;
		int number_of_f_grades;
};