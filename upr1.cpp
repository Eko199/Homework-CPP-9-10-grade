#include <iostream>
using namespace std;

bool Kratnona5(int a) {
    if (a%5==0) return true;
    return false;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    while (n <= 0) {
        cout << "Invalid input. Please try again:";
        cin >> n;
    }
    int a[n];
    for(int i=0; i<n; i++) {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    for (auto i:a) {
        if (Kratnona5(i)) cout << i << endl;
    }
    return 0;
}
