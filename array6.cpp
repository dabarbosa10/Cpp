#include <iostream>
#include <iomanip>

using namespace std;

//Forty students wew asked to rate the quality of the food in the student cafeteria on a scale of 1 to 10
//Place the 40 responses in an integer array and summarize the results of the poll.
//We ignore frequency 0
int main(){
	const int responseSize=40;
	const int frequencySize=11;
	int j=0;

	const int responses[responseSize]={1,2,6,4,8,5,9,7,8,10,1,6,3,8,6,10,3,8,2,7,6,5,7,6,8,6,7,5,6,6,5,6,7,5,6,4,8,6,8,10};
	int frequency[frequencySize]={};

	for(int i=0; i<responseSize;i++){
		j=responses[i];	
		frequency[j]+=1;
		//cout<<setw(4)<<j<<setw(13)<<frequency[j] <<endl;
	}
	cout<<"Rating"<<setw(13)<<"Frequency"<<endl;
	
	for(int k=1;k<frequencySize;k++){
	cout<<setw(4)<<k<<setw(13)<<frequency[k]<<endl;
	}


}

