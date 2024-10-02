/*10.	Write aC++ program that reads a number and check whether it is Armstrong's number or not. 
(A number is called Armstrong's number if it is equal to sum of cubes of its digits. For example, 153 is Armstrong number because 153 = 13+23+53.*/
#include<iostream>
using namespace std;
int main() {
	int num, sum=0, digits, a;
	cout<<"Enter the number: ";
	cin>>num;
	a=num;
	while(num != 0) {
		digits = num % 10;
		sum += digits * digits * digits;
		num = num / 10;
	}
	if(a==sum){
		cout<<a<<" is an Armstrong number";
	} else {
		cout<<a<<" is not an Armstrong number";
	}
	return 0;
}
