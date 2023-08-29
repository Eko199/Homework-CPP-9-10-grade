#include <iostream>
#include <cmath>
using namespace std;

void vavedi(int a[], int n) {
    for (int i=0; i<n; i++) cin >> a[i];
}
void izvedi(int a[], int n) {
    for (int i=0; i<n; i++) cout << a[i] << " ";
}
int pozitsia(int a[], int n) {
    for (int i=0; i<n; i++) {
        if (a[i] < 0) return i;
    }
    return -1; //niama otritsatelen
}
int stoinost(int a[], int n) {
    int poz = pozitsia(a, n);
    if (poz != -1) return a[poz];
    return 1; //niama otritsatelen
}

int main() {
    int n = 5;
    int a[n];
    vavedi(a, n);
    izvedi(a, n);
    int poz = pozitsia(a, n);
    if (poz != -1) {
        int *address = a;
        cout << "\nPozition: " << poz << "\nValue: " << a[poz] << "\nAddress: " << (a+poz);
    } else {
        cout << "There is no negative number in the array.";
    }
    return 0;
}
