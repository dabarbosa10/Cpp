#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;

int main(){
//constant definitions
double PI=3.1415926;
double R[10];
//variables
double area,perimeter;
int i;

//Fill the vector
	for(i=0;i<10;i++){
		R[i]+=i+1.28;	
	}


//Calculate area and perimeter
	ofstream myfile ("area.txt");
	myfile<<"Radius"<<setw(13)<<"Area"<<setw(16)<<"Perimeter"<<endl;
	for(i=0;i<10;i++){
	area=PI*R[i]*R[i];
	perimeter=2.0*PI*R[i];
	myfile<<R[i]<<setw(16)<<area<<setw(16)<<perimeter<<endl;
	}
	myfile.close();
}