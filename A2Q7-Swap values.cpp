/* 7.	Write a C++program that reads two numbers and swap them.*/
#include<iostream>
using namespace std;
int main() {
	int num1, num2, temp;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	cout<<"Before swapping:"<<endl<<"Num1="<<num1<<endl<<"Num2="<<num2<<endl;
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<"After swapping:"<<endl<<"Num1="<<num1<<endl<<"Num2="<<num2<<endl;
	return 0;
}
