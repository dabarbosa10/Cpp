/*
 * Ar.cpp
 *
 *  Created on: 29 dic. 2021
 *      Author: diegobarbosa
 */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main(){
	const int SIZE=5; // constant value; the size N for 5 elements
	double vec1[SIZE]; //defining a double array named "vec1" of size 5
	cout<< "Enter "<< SIZE << " numbers: \t";
	for(int i=0;i<SIZE; i++){
		cin>>vec1[i];
	}
	cout<< "In reverse order: ";
	for(int j=(SIZE-1); j>=0; j--){
		cout<< "\t"<< vec1[j];

	}
	cout<<endl;
    return 0;
}
