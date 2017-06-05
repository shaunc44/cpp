#include <iostream>
#include <string>
using namespace std;


int main () {

	int i;
	int input;
	int max = -999999;
	int max_idx;

	cout << "\nHow many numbers do you want to enter? ";
	cin >> input;
	int arr[input];

	for (i = 0; i < input; i++) {
		cout << "\n";
		cin >> arr[i];

		if (arr[i] > max) {
			max = arr[i];
			max_idx = i;
		}
	}

	cout << "\nIndex of the max number = " << max_idx << "\n\n";

}