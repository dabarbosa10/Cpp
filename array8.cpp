//Often it may be necessary to determine wheter an array contains a value that matches a certain "Key Value"
//This process is called searching.

#include <iostream>
#include <iomanip>
using namespace std;

//Function Declaration
int search(int b[], int size, int num);


//Main function
int main(){
	int find;
	const int arraySize=50;
	int array1[arraySize]={};
	int array2[arraySize]={};

	//Create two different arrays

	for(int i=0;i<arraySize;i++){
	array1[i]=i;
	array2[i]=i*2;
	}

   //Interface
	cout<<" Type a number to find it in the arrays: ";
	cin>>find;
	cout<<endl;
	int res;
	res=search(array2,arraySize,find);
	if(res!=-2)
		cout<<"The number "<<find<<" is in position: "<<res<<endl;
	else
		cout<<"The number is not in the list"<<endl;
}

//Function

int search(int b[],int size, int num){

	for(int k=0;k<size;k++){
		if(b[k]==num){
			return k;}		}
	return -2;		
}