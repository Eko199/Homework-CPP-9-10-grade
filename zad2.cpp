#include<iostream>
using namespace std;

bool f = false;

double P(int i, int n, double a[]) {
    if (i == n) return 1;
    if(a[i] < 0) {
        f = true;
        return a[i] * P(i+1, n, a);
    } else {
        return P(i+1, n, a);
    }
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    double a[n], p = 1;
    for(int i = 0; i<n; i++) {
        cout << "a[" << i <<"]=";
        cin >> a[i];
    }
    p = P(0, n, a);
    if (f) {
        cout << "p=" << p;
    } else {
        cout << "There are no negative numbers.";
    }

    return 0;
}
