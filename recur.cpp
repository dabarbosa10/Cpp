#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int factorial(int);

int main()
{
  int n;
  cout<<" Enter a number to create a list and calculate their factorials: ";
  cin>>n;
  for(int i=1; i<=n;i++){
    cout<<"Factorial of "<< i << "! is equal to " << factorial (i)<< endl;
  }
  

    
}

int factorial(int number){
  if(number<0){
    cout<<"Enter a positive number" <<endl;
    return 0;
  }
  if(number==0)
    {
      cout<<" Factorial of 0 is 1"<<endl;
      return 0;
    }
  else{
    return number*factorial(number-1);
  }
  

}
