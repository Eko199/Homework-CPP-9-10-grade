#include <iostream>
using namespace std;

int main() {
	string str;
	cout << "Enter a string of 0s and 1s: ";
	cin >> str;
	int x = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0') x++;
		else if (str[i] == '1') x--;
		else {
			x = 1;
			break;
		}
	}
	while (str.size() % 2 == 1 || x!=0) {
		cout << "Wrong input. Please try again: ";
		cin >> str;
		x = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '0') x++;
			else if (str[i] == '1') x--;
			else {
				x = 1;
				break;
			}
		}
	}
	int on = 0, un = 0, n = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0') on++;
		else if (str[i] == '1') un++;
		if (on == un) {
			n++;
			on = 0;
			un = 0;
		}
	}
	cout << n;
	return n;
}