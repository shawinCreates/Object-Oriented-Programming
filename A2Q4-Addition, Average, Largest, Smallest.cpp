/*4.	Write a  C++ program to read three numbers and print the following results
a.	Sum of the values.
b.	Average of three values.
c.	Largest of the three.
d.	Smallest of the three. */
#include<iostream>
using namespace std;
void addition(int x, int y, int z) {
	cout<<"The sum of given numbers is "<<x+y+z<<endl;
}
void average(int x, int y, int z) {
	cout<<"The sum of given numbers is "<<(x+y+z)/3<<endl;
}
void largest(int x, int y, int z) {
	int largest=x;
	if(y>largest)
	largest=y;
	if(z>largest)
	largest=z;
	cout<<"The largest of given numberes is "<<largest<<endl;
}
void smallest(int x, int y, int z) {
	int smallest=x;
	if(y<smallest)
	smallest=y;
	if(z<smallest)
	smallest=z;
	cout<<"The smallest of given numberes is "<<smallest<<endl;
}
int main() {
	int a, b, c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	addition(a,b,c);
	average(a,b,c);
	largest(a,b,c);
	smallest(a,b,c);
	return 0;
}
