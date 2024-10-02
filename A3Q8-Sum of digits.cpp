/*8.	Write a C++ program to find sum of digits of a number.*/
#include<iostream>
using namespace std;
int main() {
	int num, sum=0, digit;
	cout<<"Enter the number: ";
	cin>>num;
	while(num != 0) {
		digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	cout<<"The sum of digits of given number is "<<sum;
	return 0;
}
