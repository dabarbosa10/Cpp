#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 
int a;
int *aPtr;

a=7;
aPtr=&a;

cout<<"Is it the memory direction? "<< aPtr<<endl;
cout<<"Is it the value of the variable? "<< *aPtr<<endl;
cout<<"In the first line we have used aPrt, remembering that aPtr=&a"<<endl;
cout<<"The second line is the instruction *aPtr"<<endl;




}