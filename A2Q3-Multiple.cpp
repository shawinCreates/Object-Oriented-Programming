//3.	Write a C++ program to read two integer values m and n and to decide and print whether m is a multiple of n.
#include<iostream>
using namespace std;
int main() {
	int m, n;
	cout<<"Enter two numbers: ";
	cin>>m>>n;
	if(m%n==0) {
		cout<<m<<" is multiple of "<<n<<endl;
	} else {
		cout<<m<<" is not multiple of "<<n<<endl;
	}
	return 0;
}
