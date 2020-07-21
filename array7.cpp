#include <iostream>
#include <iomanip>

using namespace std;

double getAverage(int b[], int size);

int main(){
	const int arraySize=5;
	int balance[arraySize]={2,3,1000,17,50};
	cout<<"The balance average is:"<<getAverage(balance,arraySize)<<endl;
}

double getAverage(int b[],int size){
int i;
double average,sum=0.0;

	for(i=0;i<size;i++){
	sum+=b[i];
	}
average=sum/size;
return average;

}
