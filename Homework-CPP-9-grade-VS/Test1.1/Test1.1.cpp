#include <iostream>
#include<cstring>
using namespace std;

int main() {
	char duma1[10], duma2[10];
	cout << "Enter the first 10-letter word: ";
	cin.getline(duma1, 10);
	cout << "Enter the second 10-letter word: ";
	cin.getline(duma2, 10);
	cout << duma1 << duma2;
	return 0;
}