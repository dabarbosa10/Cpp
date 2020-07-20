#include <iostream>
#include <iomanip>
using namespace std;

int main(){			
	const int sizeA=10;
	int sum=0;
	int s[sizeA]={87,68,94,100,83,78,85,91,76,87};
	for(int i=0; i<sizeA;i++){
		sum+=s[i];
	}
	cout<<"Sum of the array elements is: "<<sum<<endl;
}

