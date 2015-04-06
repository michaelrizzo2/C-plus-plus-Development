#include<string>
using namespace std;

//GradeBook class definition
class GradeBook
{
	public:
		GradeBook(string);
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
		void determineClassAverage();
	private:
		string courseName;

};