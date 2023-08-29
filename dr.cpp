#include <iostream>
using namespace std;

int A(int p) {
    int sum = 0;
    for (int i = 1; i <= p; i++) {
        if (p%i == 0) sum += i;
    }
    return sum;
}

int B(int p) {
    if (p == 1) return 0;
    for (int i = p-1; i >= 1; i--) {
        if (p%i == 0) return i;
    }
}

int C(int p) {
    if (p == 1) return 0;
    for (int i = 2; i <= p; i++) {
        if (p%i == 0) return i;
    }
}

int D(int p) {
    int num = 0;
    for (int i = 2; i <= p; i+=2) {
        if (p%i == 0) num++;
    }
    return num;
}

int main() {
    int p;
    cout << "Enter a positive integer p (p > 0): ";
    cin >> p;
    while(p < 1) {
        cout << "Invalid input. Please try again: ";
        cin >> p;
    }
    cout << "a) The sum of all divisors of p is " << A(p) << ". \n";
    int maxD = B(p);
    if (maxD == 0) cout << "b) 1 is the only and biggest divisor of 1. \n";
    else cout << "b) The biggest divisor of p without p is " << maxD << ". \n";
    int minD = C(p);
    if (minD == 0) cout << "c) 1 is the only and smallest divisor of 1. \n";
    else cout << "c) The smallest divisor of p without 1 is " << minD << ". \n";
    cout << "d) The number of even divisors of p is " << D(p) << ". \n";
    return 0;
}
