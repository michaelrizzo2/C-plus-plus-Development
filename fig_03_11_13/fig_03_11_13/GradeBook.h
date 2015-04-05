
#include<string>
//This will hold the interface of the gradebook class without showing how it is implemented
using namespace std;

class Gradebook
{
	public:
		Gradebook(string);
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
	private:
		string courseName;

};
