#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, max, min;
    cout << "Type a, b and c: ";
    cin >> a >> b >> c;
    if (a != 0 && b != 0 && c != 0) {
        max = a;
        min = a;
        if (b > max) max = b;
        if (c > max) max = c;
        if (b < min) min = b;
        if (c < min) min = c;
        if (abs(a%2) == 0 && abs(b%2) == 0 && abs(c%2) == 0) {
            cout << "Max is " << max << ".";
        } else if (abs(a%2) == 1 && abs(b%2) == 1 && abs(c%2) == 1) {
            cout << "Min is " << min << ".";
        } else {
            if (abs(max%2) == 1) {
                if (abs(a%2) == 0) max = a;
                if (abs(b%2) == 0) max = b;
                if (abs(c%2) == 0) max = c;
                if (abs(a%2) == 0 && a > max) max = a;
                if (abs(b%2) == 0 && b > max) max = b;
                if (abs(c%2) == 0 && c > max) max = c;
            }
            if (abs(min%2) == 0) {
                if (abs(a%2) == 1) min = a;
                if (abs(b%2) == 1) min = b;
                if (abs(c%2) == 1) min = c;
                if (abs(a%2) == 1 && a < min) min = a;
                if (abs(b%2) == 1 && b < min) min = b;
                if (abs(c%2) == 1 && c < min) min = c;
            }
            cout << "The answer is " << max - min << ".";
        }
    } else {
        cout << "Invalid input.";
    }
}
