/*
 * Day7.cpp
 *
 *  Created on: 10 nov. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr1[n];
	for(int i=0; i<n; i++){
		int m;
		cin>>m;
		arr1[i]=m;
	}
	for(int j=(n-1); j>=0; j--){
		cout<<arr1[j]<<" ";
	}
	cout<<endl;
	return 0;
}



