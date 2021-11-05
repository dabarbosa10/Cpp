#include <iostream>
#include <cmath>

using namespace std;

void Cond(int num);

int main(){

    int nb;
    cin>>nb;

    Cond(nb);
    return 0;

}


void Cond(int num){

    if (num%2!=0){
        cout<<"Weird"<<endl;
    }

    if(num%2==0 && (2<=num) && (num<=5)){
        cout<<"Not Weird"<<endl;
    }


    if(num%2==0 && (6<=num) && (num<=20) ){
        cout<<"Weird"<<endl;
    }

    if(num%2==0 && (num>20)){
        cout<<"Not Weird"<<endl;
    }

}