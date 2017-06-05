#include <iostream>
#include <string>
using namespace std;


int main () {

	string sent;
	int i;
	int wordCount = 0;

	cout << "Enter a sentence: ";
	getline(cin, sent);

	for (i = 0; i < sent.size(); i++) {
		if (sent[i] == ' ') {
			wordCount++;
		}
	}

	cout << "There are " << wordCount + 1 << " words in the sentence.";

}