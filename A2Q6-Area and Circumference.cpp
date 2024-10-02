/*6.	Write a C++program that reads radius of circle and finds area and circumference.*/
#include<iostream>
using namespace std;
int main() {
	float radius;
	cout<<"Enter the radius: ";
	cin>>radius;
	
	double circumference = 2 * 3.14 * radius;
	double area = 3.14 * radius * radius;
	
	cout<<"Area of circle="<<area<<endl;
	cout<<"Circumference of circle="<<circumference<<endl;
	
	return 0;
}
