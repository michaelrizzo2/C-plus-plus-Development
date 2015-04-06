#include<string>

using namespace std;

class Gradebook

{
	public:
		Gradebook(string);//constructor that initializes the gradebook class
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
	private:
		string courseName;



};