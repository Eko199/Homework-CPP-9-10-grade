#include <iostream>
#include<cstring>
using namespace std;

int main() {
	int n = 0, x = 0;
	char izr[50], first[3];
	first[2] = '\0';
	cout << "Enter a sentence: ";
	cin.getline(izr, 50);
	for (int i = 0; i < strlen(izr); i++) {
		if (izr[i] == ' ') {
			if (x == 2) { 
				n++;
				if (n == 1) { 
					first[0] = izr[i-2];
					first[1] = izr[i-1]; 
				}
			}
			x = 0;
		} else  x++;
	}
	if (x == 2) {
		n++;
		if (n == 1) {
			first[0] = izr[strlen(izr) - 2];
			first[1] = izr[strlen(izr) - 1];
		}
	}
	if (n != 0) cout << "There is/are " << n << " 2-letter words." << endl
		<< "The first one is " << first << ".";
	else cout << "There aren't any 2-letter words.";
	return 0;
}