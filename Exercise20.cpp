#include <iostream>
using namespace std;

int main() {
    long long n;
    int a, max = -1, sum = 0;
    cout << "Type a positive integer n (20<n<1000000): ";
    cin >> n;
    while (n <= 20 || n >= 1000000) {
        cout << "Invalid input. Please try again: ";
        cin >> n;
    }
    while (n != 0) {
        a = n%10;
        sum += a;
        if (a > max) max = a;
        n /= 10;
    }
    cout << sum << " " << max;
    return 0;
}
