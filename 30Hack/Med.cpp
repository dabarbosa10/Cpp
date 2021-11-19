/*
 * Med.cpp
 *
 *  Created on: 18 nov. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cmath>
#include <array>
#include <algorithm>
#include <iomanip>
#define FIXED_FLOAT(x) std::fixed <<std::setprecision(2)<<(x)
using namespace std;

//===========Function Declaration===========
double average(int arr[], int n);
double median(int arr[], int n);
double mode(int arr[],int n);
//===========Main Function ==================
int main(){

	int size;
	cin>>size;
	int vec[size];

	for(int i=0; i<size; i++){
		cin>>vec[i];
	}
	sort(vec,vec+size);
	//for(int j=0; j<size; j++ ){
	//	cout<<vec[j]<<" ";
	//}
	cout<<average(vec,size)<<endl;
	cout<<median(vec,size)<<endl;
	cout<<mode(vec,size)<<endl;
	return 0;
}
//=================Average algorithm===========
double average(int arr[], int n){
	double sum=0.0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	return (sum/n);
}

//================Median Algorithm================
double median(int arr[], int n){
	//cout<<n<<"   "<<arr[n/2+1]<<"   "<<arr[n/2 -1]<<endl;
	if(n%2==0){
		return (arr[n/2 -1]+arr[n/2])/2.0;
	}

	return arr[n/2];
	}
//=================Mode Algorithm==============
double mode(int arr[],int n){
	int counter=1;
	int max=0;
	int mode=arr[0];

	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			counter+=1;
			if(counter>max){
				max=counter;
				mode=arr[i];
			}
		}
		else{
			counter=1;
		}
	}

	return mode;
}
