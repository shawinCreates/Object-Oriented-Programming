/*7.	Write a C++program to input time in second convert it into hour, minute and second.*/
#include<iostream>
using namespace std;
int main() {
	int hour, minutes, seconds;
	cout<<"Enter the total seconds: ";
	cin>>seconds;
	
	hour = seconds / 3600;
	seconds = seconds % 3600;
	minutes = seconds / 60;
	seconds = seconds % 60;
	
	cout<<"Total time="<<hour<<" hours "<<minutes<<" minutes "<<seconds<<" seconds.";
	return 0;
}
