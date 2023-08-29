#include <iostream>
#include <cmath>
using namespace std;

void vavedi(int a[], int n) {
    for (int i=0; i<n; i++) cin >> a[i];
}
void izvedi(int a[], int n) {
    for (int i=0; i<n; i++) cout << a[i] << " ";
}
void dvoichen(int x) {
    double a = 0, i = 0;
    while (x!=0) {
        a += (x%2)*pow(10.0, i);
        i++;
        x/=2;
    }
    cout << a << " ";
}

int main() {
    int n = 30;
    int a[n];
    vavedi(a, n);
    izvedi(a, n);
    for (int i = 0; i < n; i ++) {
        dvoichen(a[i]);
    }
    return 0;
}
