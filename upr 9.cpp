#include <iostream>
#include <cmath>
using namespace std;

void vavedi(int a[], int n) {
    for (int i=0; i<n; i++) cin >> a[i];
}
void izvedi(int a[], int n) {
    for (int i=0; i<n; i++) cout << a[i] << " ";
}
void sbor(int x) {
    int sum = 0;
    while (x!=0) {
        sum += x%10;
        x/=10;
    }
    cout << sum;
}

int main() {
    int n = 40;
    int a[n], b[n];
    vavedi(a, n);
    izvedi(a, n);
    for (int i = 0; i < n; i ++) {
        b[n] = sbor(a[n]);
    }
    izvedi(b, n);
    return 0;
}
