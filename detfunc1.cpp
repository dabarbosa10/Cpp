#include <iostream>
using namespace std;

int exponent(int, int);


int main(){
  int n1, n2;
  cout<<"Type to numbers to calculate the exponentiation"<<endl;
  cout<<"The first number is the base and the second is its exponent"<<endl;
  cout<<"Write the first number and then press enter"<<endl;
  cin>>n1;
  cout<<"Write the second number and press enter"<<endl;
  cin>>n2;
  //------------------------------------------------------------------------
  //Use the function.................
  cout<<"The number "<<n1<<" to the "<< n2 <<" is: "<< exponent(n1,n2)<<endl;
  
}

int exponent(int num1, int num2){
  int num3=1;
  for(int i=num2; i>=1; i--)
    {
      num3*=num1;
    }
  return num3;
  
}
