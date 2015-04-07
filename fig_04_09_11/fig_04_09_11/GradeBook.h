#include<string>
using namespace std;

class GradeBook
{
	public:
		GradeBook(string);
		void setCourseName();
		string getCourseName();
		void displayMessage();
		void determineClassAverage();
	private:
		string courseName;
};