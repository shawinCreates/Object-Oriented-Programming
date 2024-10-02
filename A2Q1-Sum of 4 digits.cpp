//1.	Write a program in C++ to read a four digit number and print the sum of its digits.
#include<iostream>
using namespace std;
int main() {
	int num, sum=0, digit;
	cout<<"Enter the 4 digit number: ";
	cin>>num;
	while(num != 0) {
		digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	cout<<"The sum of digits of given number is "<<sum;
	return 0;
}
