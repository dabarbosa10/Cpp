/*
 * Day6a.cpp
 *
 *  Created on: 10 nov. 2021
 *      Author: diegobarbosa
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class CountSt{
public:
	string str1;
	void SetStr(string srt);
	string Count(void);

};


void CountSt::SetStr(string srt){
	str1=srt;
}

string CountSt::Count(){
	int lenst;
	lenst=str1.length();
	string STR1,STR2,STR3;


	for(int i=0; i<=(lenst -1 ); i++){
		if (i%2==0){
            STR1+=str1[i];
		}
		else{
			STR2+=str1[i];

		}

	}
	STR3=STR1+ " " +STR2;
	return STR3;
}

int main(){
	int t;
	cin>>t;
	string ST1;

	for(int i=0;i<t;i ++){
		cin>>ST1;
		CountSt EX1;
		EX1.SetStr(ST1);
		cout<<EX1.Count()<<endl;

	}
	return 0;

}




