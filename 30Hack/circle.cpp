/*
 * circle.cpp
 *
 *  Created on: 5 nov. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include <cmath>
using namespace std;
//----------------------------Class declaration:------------
class cylinder{
public:
	double radius;
	double height;

	//Member functions declarations
	//Here we declare the functions of the class
	double getVolume(void);
	void setRadius(double rad);
	void setHeight(double hei);

};

double cylinder::getVolume(void){
	return ((3.14159)*radius*radius*height);
}

void cylinder::setRadius(double rad){
	radius=rad;
}

void cylinder::setHeight(double hei){
	height=hei;
}
//--------------------------------------------
int main(){
	cylinder cylinder1;
	cylinder cylinder2;

	double volume1, volume2;

	//cylinder1 specification:

	cylinder1.setRadius(6.0);
	cylinder1.setHeight(12.0);
	//cylinder2 specification:
	cylinder2.setRadius(4.0);
	cylinder2.setHeight(10.0);

	volume1=cylinder1.getVolume();
	volume2=cylinder2.getVolume();

	cout<<"Volume of cylinder 1: "<<volume1<<endl;
	cout<<"Volume of cylinder 2: "<<volume2<<endl;



	return 0;
}


