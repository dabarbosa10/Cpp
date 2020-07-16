#include <iostream>
#include <cmath>

using namespace std;

//Function Declaration
double hypo(double ,double );

//Main function
int main()
{
  int n1,n2,j=1;
  
  cout<<"#####PROGRAM THAT CALCULATES HYPOTENUSE OF A RIGHT TRIANGLE####"<<endl;
  cout<<endl;
  while(j==1){
  cout<<"Enter the first side a, and press enter: ";
  cin>>n1;
  cout<<endl;
  cout<<"Enter the second side b, and press enter: ";
  cin>>n2;
  cout<<endl;
  cout<<"The hypotenuse of the right triangle is: " <<hypo(n1,n2)<<endl;
  cout<<endl;
  cout<<"####################################################"<<endl;
  cout<<"To repeat a hypotenuse calculation type 1 and press enter, otherwise type another number and press enter "<<endl;
  cin>>j;
  }
  cout<<"BYE!"<<endl;
}

//Function construction
double hypo(double ca, double co){
  double hypot;
  return sqrt(ca*ca+ co*co);

}
