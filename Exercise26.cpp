#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, mult = 1, maxo = 0, mine = 1;
    cout << "Type n: ";
    cin >> n;
    while(n <= 0) {
        cout << "Incorrect input (n > 0). Please try again: ";
        cin >> n;
    }
    int a[n];
    for (int i=0; i<n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
        if (a[i] % 2) {
            mult *= a[i];
            if (maxo == 0 || a[i] > maxo) maxo = i;
        } else {
            sum += a[i];
            if (mine == 1 || a[i] < mine) mine = i;
        }
    }
    int b = maxo;
    int c = mine;
    a[maxo]
    return 0;
}
