/*4.	Write a C++program that reads a number and tests whether is it multiple of 5 but not 11*/
#include<iostream>
using namespace std;
int main() {
	int num;
	cout<<"Enter the Number: ";
	cin>>num;
	if(num % 5 == 0 && num % 11 != 0){
		cout<<num<<" is multiple of 5 but not 11"<<endl;
	} else {
		cout<<num<<" is multiple of 5 or 11"<<endl;
	}
	return 0;
}
