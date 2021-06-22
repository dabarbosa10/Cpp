#include <iostream>
#include <string>
using namespace std;

class Grades
{
public:	
	explicit Grades(string name)
	:courseName(name)	
	{

	}

	void establishName(string name)
	{
	courseName=name;
	}

	string getName()const
	{
	return courseName;
	}

	void showMessage() const
	{
	cout<<"Welcome to the grade Book: "<<getName()<<endl;
	}

private:
	string courseName;
};
/* 

*/

//Main function
int main()
{

	//Create two objects
	Grades book1("CS101 Introduction to C++ programming");
	Grades book2("CS102 Data structures in C++");
	
	//Print 
	cout<<"Book1 was created for: "<< book1.getName()<<endl;
	cout<<"Book2 was created for: "<< book2.getName()<<endl;
 
}