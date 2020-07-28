#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;

void sqrcub(double& ,double&, double);

int main(){
double num,c,s;
cout<<"Type a maximum threshold number to calculate a list of squares and cubes"<<endl;
cin>>num;
ofstream myfile("Reference.txt" ) ;
myfile.precision(17) ;
myfile<<"Number"<<setw(25)<<"Square"<<setw(20)<<"Cube"<<endl;
for(int i=1;i<=num;i++){
	sqrcub(s,c,i);
	myfile<<i<<setw(25)<<s<<setw(25)<<c<<endl;
	}


}

void sqrcub(double& square, double& cube, double x){

square=x*x;
cube=x*x*x;


}