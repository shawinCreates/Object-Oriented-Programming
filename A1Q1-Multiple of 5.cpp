/*1.	Write a C++program that reads a number and tests whether it is multiple of 5 or not.*/
#include<iostream>
using namespace std;
int main() {
	int num;
	cout<<"Enter the Number: ";
	cin>>num;
	if(num%5==0){
		cout<<num<<" is multiple of 5"<<endl;
	} else {
		cout<<num<<" is not multiple of 5"<<endl;
	}
	return 0;
}
