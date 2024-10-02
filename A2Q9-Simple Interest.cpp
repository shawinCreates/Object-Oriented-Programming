/*9.	Write a C++ program that reads P,T, and R and find simple interest and amount.*/
#include<iostream>
using namespace std;
void SI(double p, int t, double r) {
	double interest = (p * t *  r) / 100;
	double amount = p + interest;
	cout<<"Simple Interest="<<interest<<endl;
	cout<<"Amount="<<amount<<endl;
}
int main() {
	int time;
	double principal, rate;
	cout<<"Enter the principal amount, time and rate: ";
	cin>>principal>>time>>rate;
	
	SI(principal, time, rate);
	return 0;
}
