/*
 * SimpleSum.cpp
 *
 *  Created on: 8 ene. 2022
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

int suma(int [],int);

int main(){
	int a[]={13, 33, 55,77};
	int sz=sizeof(a)/sizeof(int);
	cout<<"sum: "<<suma(a,sz)<<endl;

	return 0;
}

int suma(int a[], int n){
	int sum=0;
	for(int i=0; i<n;i++){
		sum+=a[i];

	}
	return sum;
}


