#include <iostream>
using namespace std;

bool DifDigits(int a) {
    int b, c;
    while (a != 0) {
        c = a%10;
        a /= 10;
        b = a;
        while (b != 0) {
            if (c == b%10) return false;
            b /= 10;
        }
    }
    return true;
}

int main() {
    int n, a, num = 0;
    cout << "Enter a positive integer n: ";
    cin >> n;
    while (n < 1) {
        cout << "Invalid input (n >= 1). Please try again: ";
        cin >> n;
    }
    cout << "Enter " << n << " integers: ";
    for (int i=0; i<n; i++) {
        cin >> a;
        if (DifDigits(a)) num++;
    }
    cout << "There are " << num << " numbers with different digits.";
    return 0;
}
