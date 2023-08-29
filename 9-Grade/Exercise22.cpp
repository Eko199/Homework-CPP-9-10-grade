#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n, k = 0;
    int a, i = 0;
    cout << "Type a positive integer n (0<n<1000000): ";
    cin >> n;
    while (n <= 0 || n >= 1000000) {
        cout << "Invalid input. Please try again: ";
        cin >> n;
    }
    while (n != 0) {
        a = n%2;
        k += pow(10, i) * a;
        i++;
        n /= 2;
    }
    k+=1;
    cout << k;
    return 0;
}
