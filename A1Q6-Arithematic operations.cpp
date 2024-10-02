/*6.	Write a C++program to read any two numbers and performs simple arithmetic operations */
#include<iostream>
using namespace std;
void addition(int a, int b) {
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void difference(int a, int b) {
	cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(int a, int b) {
	cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(int a, int b) {
	cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;
	cout<<"The remainder of "<<a<<" and "<<b<<" is "<<a%b<<endl;
}
int main() {
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	addition(x,y);
	difference(x,y);
	multiplication(x,y);
	division(x,y);
	return 0;
}
