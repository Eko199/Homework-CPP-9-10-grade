#include <iostream>
using namespace std;

int NOD(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b = b - a;
    }
    return a;
}

int main() {
    int a, b, c, d;
    cout << "Enter four positive integers: ";
    cin >> a >> b >> c >> d;
    while (a < 1) {
        cout << "Invalid input for a (a >= 1). Please try again: ";
        cin >> a;
    }
    while (b < 1) {
        cout << "Invalid input for b (b >= 1). Please try again: ";
        cin >> b;
    }
    while (c < 1) {
        cout << "Invalid input for c (c >= 1). Please try again: ";
        cin >> c;
    }
    while (d < 1) {
        cout << "Invalid input for d (d >= 1). Please try again: ";
        cin >> d;
    }
    cout << "A = NOD(a,b) + 2.NOD(c,d) = " << NOD(a, b) + 2*NOD(c, d);
}
