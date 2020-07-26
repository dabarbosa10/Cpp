#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
//---------------------------

long int fact(int);
long int perm(int, int);

//----------------------------

int main(){

int nf,de,n,k;
cout<<"##########################################################"<<endl;
cout<<"If you want to calculate the factorial of a number type 1"<<endl;
cout<<"or if you want to calculate a permutation type 2"<<endl;
cin>>de;
	
//...........................
	if(de==1){
	cout<<"Type number to calculate its factorial"<<endl;
	cin>>nf;
		if(nf<0){cout<<"Factorial of negative number!"<<endl;
				return 0;}
	cout<<"The factorial of "<<nf<<" is: "<<fact(nf)<<endl;
	cout<<"#########################################################"<<endl;
	}
//---------------------
	if(de==2){
	cout<<"Type the numbers n and k to calculate its permutation n!/(n-k)!"<<endl;
	cin>>n>>k;
		if(n<0 || k<0){cout<<"Negative numbers!"<<endl;
				return 0;}
	cout<<"The permutation "<<n<<"!/("<<n<<"-"<<k<<")! is: "<<perm(n,k)<<endl;
	cout<<"#########################################################"<<endl;
	}
//---------------------



}

//---------------------------------
//-----------------------------------
long int fact(int n){
int k=1;
	if(n==1 || n==0)
		{return 1;}
	for(int i=n;i>=1;i--){
		k=k*i;
	}
return k;

}
//...................................
long int perm(int x, int y){

int k;

	if(x<=y){
	cout<<"Error, please check the numbers"<<endl;
	return 0;
	}
	k=fact(x)/fact(x-y);
	return k;	

}


