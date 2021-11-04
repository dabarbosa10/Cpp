#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.

	 int i2;
	 double D;
    string s2;

    cin>>i2;
	 cin>>D;
    getline(cin>>ws,s2);
	 cout<<(i+i2)<<endl;
    cout<<fixed<<setprecision(2)<<d+D<<endl;
	 cout<<(s+s2)<<endl;

    

    return 0;
}