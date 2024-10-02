/*1.	Write a program that creates an integer array of length 30, fills the array with the sequence 1,-2,3,-4,…..29,-30 using a for loop. 
Also print the above sequence using for loop*/
#include<iostream>
using namespace std;
int main() {
	int arr[30];
	for(int i=1; i<=30; i++) {
		if(i % 2 == 0) {
			arr[i] = -i;
		} else {
			arr[i] = i;
		}
	}
	cout<<"Series:"<<endl;
	for(int i=1; i<=30; i++) {
		cout<<arr[i]<<"\t";
	}
	return 0;
}
