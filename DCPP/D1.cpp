#include <iostream>
using namespace std;

class Grades
{
public:	
	//This functions shows the Welcome message 
	void ShowMessage() const
	{
	cout<<"Welcome to the Grades Books! "<<endl;
	}

};
/* 

*/

//Main function
int main()
{

	Grades myGradeBook;
	myGradeBook.ShowMessage();

}