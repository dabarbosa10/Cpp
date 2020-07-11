#include <iostream>
using namespace std;

//Function square int values

int square(int x)
{
  cout<<"square of integer " << x << " is " ;
  return x*x;
}


double square(double y)
{
  cout<<"Square of double "<< y << " is ";
  return y*y;

}

int main()
{
  cout<<square(7)<<endl;
  cout<<square(7.5)<<endl;
}
