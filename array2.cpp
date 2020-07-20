#include <iostream>
#include <iomanip>
using namespace std;

int main(){
//initializing with values

int n[10]={2,3,4,11,-1,-11,8,10,-3,-4};
//-----------------------
	cout<<"Element"<<setw(13)<<"Value"<<endl;
//now print the values in reverse order
	for(int i=9; i>=0;i--){
	cout<<i<<setw(7)<<n[i]<<endl;
	}

}