#include <iostream>
#include <iomanip>

using namespace std;

double sum(double [],int);

int main(){

double ar[]={1.0,2.0,3.0,4.0,5.0};
int size=sizeof(ar)/sizeof(double);
cout<<"The vector is :"<<endl;
	for(int j=0;j<5;j++){
	cout<<"\t"<<ar[j];
	}	

cout<<endl;
cout<<size<<endl;
cout<<"The sum of the vector components is: "<<sum(ar,size)<<endl;
}

double sum(double a[],int n){
double s=0;


	for(int i=0;i<n;i++){
	s+=a[i];
	}

	return s;
}