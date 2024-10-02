/*5.	Create a class Number with three int instance variable x ,y and z. 
The class will have one constructor. 
The class also will contain member function getMax() that will return larger number. 
In main function create an object of Number and will print the largest number.*/
#include<iostream>
using namespace std;
class Number {
	private:
		int x, y, z;
	public:
		Number(int a, int b, int c){
			x = a;
			y = b;
			z = c;	
		}
		
		int getMax() {
			int Max;
			if(x > y && x > z) {
				Max = x;
			} else if (y > x && y > z) {
				Max = y;
			} else {
				Max = z;
			}
			return Max;
		}
};
int main() {
	int num1, num2, num3;
	cout<<"Enter three numbers: ";
	cin>>num1>>num2>>num3;
	Number maximum(num1, num2, num3);
	cout<<"Max among given numbers is "<<maximum.getMax();
	return 0;
}
