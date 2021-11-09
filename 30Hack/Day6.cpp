/*
 * Day6.cpp
 *
 *  Created on: 8 nov. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cmath>
using namespace std;

class table{

public:
	int num;
	void SetN(int n);
	void multi(void);
};

void table::SetN(int n){
num=n;
}

void table::multi(void){
	for(int i=1; i<=10; i+=1){
		cout<< num <<" x "<< i <<" = "<< i*num <<endl;
	}
}

int main(){
	int nm;
	cin>>nm;
	table tb1;
	tb1.SetN(nm);
	tb1.multi();

	return 0;
}

