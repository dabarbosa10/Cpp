/*
 * Algo_stat.cpp
 *
 *  Created on: 17 nov. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include <cmath>
#include <array>
using namespace std;

class stats{
public:
	int t;
	void SetArraySize(int m);
	void ReadArray(void);
	void average(void);
};

void stats::SetArraySize(int m){
	t=m;
}

void stats::ReadArray(){
	int AR[t];
	for(int i=0;i<t;i++){
		cin>>AR[i];
	}

}




int main(){
	int tam;
	cin>>tam;
	stats EX1;
	EX1.SetArraySize(tam);
	EX1.ReadArray();
	return 0;
}

