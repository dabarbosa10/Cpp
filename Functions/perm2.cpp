#include <iostream>
#include <iomanip>


//--------------------------------------------------------------------
using namespace std;

long int permu(int, int );
long int factorial(int );
long int combination(int, int);
//--------------------------------------------------------------------
int main(){

int n1,k1,f1;

cout<<"Type the numbers n and k to calculate the permutation P(n,k)"<<endl;
cin>>n1>>k1;
cout<<"The permutation is P("<<n1<<","<<k1<<") is:"<<permu(n1,k1)<<endl;  
cout<<"Type a number m to calculate the factorial m!"<<endl;
cin>>f1;
cout<<"The factorial of "<<f1<<" is "<<factorial(f1)<<endl;
cout<<"The 
}
//########################################################################
long int permu(int n, int k){
long int p=1;
if(n<0 || k<0 || k>n){ return 0;} 

	for(int i=0; i<k;i++){
		p=p*(n-i);

	}
	return p;

}
//............................................................................
long int factorial(int m){
long int f=1;
if(m<0){return 0;}

if(m==0 || m==1){return 1;}

	for(int j=m;j>=1;j--){
		f=f*j;
	}
	return f;
}
//.............................................................................
long int combination(int n,int k){
	
	return permu(n,k)/factorial(k);
}