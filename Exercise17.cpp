#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k, a;
    cout << "Enter an integer and a digit:";
    cin >> n >> k;
    while(k > 9 || k < 0) {
        cout << "Invalid digit. Try again.";
        cin >> k;
    }
    do {
        a = abs(n % 10);
        n /= 10;
    } while(a != k && n != 0);
    if (a == k) {
        cout << "There is k in n.";
    } else {
        cout << "There isn't k in n.";
    }
    return 0;
}
