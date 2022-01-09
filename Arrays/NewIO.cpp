/*
 * NewIO.cpp
 *
 *  Created on: 8 ene. 2022
 *      Author: diegobarbosa
 */

#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

void read(int[],int&);
void print(int[],int);

int main()
{
	const int MAXSIZE=100;
	int a[MAXSIZE]={0}, size;
	read(a,size);
	cout << "The array has " << size << " elements: "; print(a,size);
}

void read(int a[], int& n)
{
	cout << "Enter integers. Terminate with 0:\n";
	n = 0;
	do{
		cout << "a[" << n << "]: ";
		cin >> a[n];
	}
	while (a[n++] != 0 && n < 100); --n; // don't count the 0
}

void print(int a[], int n) {
	for (int i=0; i<n; i++)
		cout << a[i] << " ";
}


