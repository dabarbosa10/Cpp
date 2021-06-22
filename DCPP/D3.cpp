#include <iostream>
#include <string>
using namespace std;

class Grades
{
public:	
	void establishCourseName(string name)
		{
		courseName=name;
		}

	string obtainCourseName() const
	{
		return courseName;
	}	

	void showMessage() const
	{
	cout<<"Welcome to the grade book: \n " <<obtainCourseName()<<endl;
    }

private: 
	string courseName;
};
/* 

*/

//Main function
int main()
{
	string courseName;
	Grades myGradeBook;

   //Initial name
	cout<<"The initial course name is: " << myGradeBook.obtainCourseName()<<endl;

   //-----------------------------------
	cout<<"Type the name of the course: ";
	getline(cin, courseName);
	cout<<endl;
   //---------------- 
	myGradeBook.establishCourseName(courseName);
	cout<<endl;
	myGradeBook.showMessage();

}