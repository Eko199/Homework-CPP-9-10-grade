#include <iostream>
#include <cmath>
using namespace std;

void vavedi(int a[], int n) {
    for (int i=0; i<n; i++) cin >> a[i];
}
void izvedi(int a[], int n) {
    for (int i=0; i<n; i++) cout << a[i] << " ";
}
void sort(int a[], int n) {
    int max, b, x;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (j==0) {
                max = a[j];
                x = j;
            } else if (a[j] > max) {
                max = a[j];
                x = j;
            }
        }
        b = a[i-1];
        a[i-1] = a[x];
        a[x] = b;
    }
}

int main() {
    int x[] = {1, 3, 2, 15};
    sort(x, 4);
    izvedi(x, 4);

    return 0;
}
