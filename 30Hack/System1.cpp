/*
 * System1.cpp
 *
 *  Created on: 5 nov. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
using namespace std;


class Box{
public:
	double length;
	double breadth;
	double height;

};

int main() {

	Box Box1;
	Box Box2;

	double volume1, volume2;

	//Box1 specification
	Box1.height=5.0;
	Box1.length=6.0;
	Box1.breadth=7.0;

	//Box 2 specification

	Box2.height=10.0;
	Box2.length=12.0;
	Box2.breadth=13.0;

	volume1=Box1.breadth*Box1.height*Box1.length;
	volume2=Box2.breadth*Box2.height*Box2.length;

	cout<<"Volume of box 1 is:  "<<volume1<<endl;
	cout<<"Volume of box 2 is:  "<<volume2<<endl;

	return 0;
}
