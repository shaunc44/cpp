#include <iostream>
#include <string>
using namespace std;


int main() {

	int number;
	cout << "\nEnter a 3-digit number: ";
	cin >> number;

	int num1 = number / 100;
	int num2 = ( number / 10 ) % 10;
	int num3 = number % 10;

	if ( (num3 - num2 == 1) && (num2 - num1 == 1) ) {
		cout << "\nconsecutive!\n";
	}
	else {
		cout << "\nnot consecutive :(\n";
	}

}