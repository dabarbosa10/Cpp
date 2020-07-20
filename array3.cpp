#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	//constant variable
	const int arraySize=10;
	int s[arraySize];
	cout<<"Element"<<setw(13)<<"Value"<<endl;
	for(int i=0; i<arraySize;i++){
		s[i]=2+i*2;
		cout<<setw(6)<<i<<setw(13)<<s[i]<<endl;	
	}

}