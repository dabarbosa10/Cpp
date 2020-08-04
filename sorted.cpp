#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int size;
cout<<"Enter the vector size, a number between 2 and 10"<<endl;
cin>>size;
	if(size<2 || size>10){
	cout<<"Not valid number!"<<endl;
	return 0;
	}
cout<<"Type the each number component and press enter"<<endl;
double ar[size];

	for(int i=0;i<size;i++){
	cout<<"Type component "<<i<<": ";
	cin>>ar[i];
	cout<<endl;
	}

	cout<<"The array is size is: "<<endl;
	cout<<"and the components are: "<<endl;
	for(int j=0;j<size;j++){
	cout<<ar[j]<<endl;
	}

	cout<<"The array in reversed order is: "<<endl;
	for(int k=size-1;k>=0;k--){
	cout<<ar[k]<<endl;
	}
	
	
}