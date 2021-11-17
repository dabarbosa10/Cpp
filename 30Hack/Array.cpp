/*
 * Array.c
 *
 *  Created on: 16 nov. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int n,m;
	m=0;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
		m+=arr[i];

	}
	cout<<m<<endl;
	return 0;
}



