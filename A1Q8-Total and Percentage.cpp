/*8.	Write a C++program that reads marks in five subjects and finds total marks, percentage.*/
#include<iostream>
using namespace std;
int main() {
	float a[5];
	float total=0, percentage;
	cout<<"Enter the marks of 5 subjects respectively: ";
	for(int i=0; i<5; i++) {
		cin>>a[i];
	}
	for(int i=0; i<5; i++) {
		total += a[i];
	}
	percentage = total / 500 * 100;
	cout<<"Total="<<total<<endl<<"Percentage="<<percentage;
	return 0;
}
