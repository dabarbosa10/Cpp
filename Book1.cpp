#include<iostream> // Input and output streaming
#include <cmath> //Math Library
using namespace std;

int main()
{

	double x=2.0, y=3.0, a,b,c,d,e;
	const double g=9.81; // units: m/s const double will never change.
	double tolerance=1.0e-12; // scientific notation

	a=x/y;
	b=sqrt(x);
	c=exp(y);
	d=pow(x,y);
	e=M_PI;
	
	cout<<"\a";
	cout<<"hello World "<<endl;
	cout<<g<<endl;
	cout<< "Tolerance: "<< tolerance <<endl;
	cout<< a << " " << b << " " << c <<" "<< d <<" " << e  <<endl;
	cout<<"\a";
	return 0;

}