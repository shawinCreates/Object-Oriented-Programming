/*5.	Write a C++program that reads a number and finds sum of the squares of digits */
#include<iostream>
using namespace std;
int main() {
	int num, sum=0, digit;
	cout<<"Enter the number: ";
	cin>>num;
	while(num != 0) {
		digit = num % 10;
		sum += digit * digit;
		num = num / 10;
	}
	cout<<"The sum of digits of given number is "<<sum;
	return 0;
}
