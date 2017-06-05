#include <iostream>
#include <string>
using namespace std;


int main() {

	int number, i;
	cout << "Enter a number: ";
	cin >> number;

	for (i = number; i > 0; i--) {
		cout << i << "\n";
	}

	cout << "blastoff!";

	return 0;

}