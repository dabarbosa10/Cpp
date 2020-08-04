#include <iostream>
#include <iomanip>

using namespace std;

int main(){

//Let's define a double vector of length 3

double a[3];

a[0]=33.33;
a[1]=22.22;
a[2]=11.11;

//Now print each of the values:

	for(int i=0;i<=2;i++){
	cout<<"Index: "<<i<<endl;
	cout<<"Value:"<<a[i]<<endl;
	cout<<endl;
	}



}