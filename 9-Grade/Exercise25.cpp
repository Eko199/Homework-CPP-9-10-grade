#include <iostream>
using namespace std;

int main() {
    int n;
    bool f = false;
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
        if (i != 0 && a[i] == a[i-1]) f = true;
    }
    if (f) cout << "Yes.";
    else cout << "No.";
    return 0;
}
