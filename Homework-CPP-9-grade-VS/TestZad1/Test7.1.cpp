#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char duma[50];
	cout << "Enter a word: ";
	cin.getline(duma, 50);
	bool f = true;
	for (int i = 0; i < strlen(duma) / 2 + 1; i++) {
		if (duma[i] != duma[strlen(duma) - i - 1]) {
			f = false;
			break;
		}
	}
	if (f) cout << duma << " is a palindrome.";
	else cout << duma << " is not a palindrome.";
	return 1;
}