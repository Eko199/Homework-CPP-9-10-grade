#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long n;
    int a, sum = 0, num = 0;
    cout << "Type a positive integer n (1<n<1000000): ";
    cin >> n;
    while (n <= 1 || n >= 1000000) {
        cout << "Invalid input. Please try again: ";
        cin >> n;
    }
    while (n != 0) {
        a = n%10;
        sum += a;
        num++;
        n /= 10;
    }
    cout << sum * 1.0 / num;
    return 0;
}
