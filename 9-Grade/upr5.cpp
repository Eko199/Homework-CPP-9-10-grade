#include <iostream>
using namespace std;

int NOD(int a, int b) {
    while (a!=b) {
        if (a>b) a -= b;
        else b -= a;
    }
    return a;
}

int main() {
    int arr[20], size=20;
    cout << "Enter 20 positive integers: \n";
    for (int i=0; i<20; i++) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
        while (arr[i] < 1) {
            cout << "Invalid input (a >= 1). Please try again: ";
            cin >> arr[i];
        }
    }
    bool f = false;
    while (size != 1) {
        if (size%2 == 1) f = true;
        for (int i=0; i<size/2; i++) {
            arr[i] = NOD(arr[i*2], arr[i*2+1]);
            size /= 2;
        }
        if (f) {
            arr[size] = arr[size*2];
            size += 1;
            f = false;
        }
    }
    cout << "NOD of all 20 integers is " << arr[0] << ".";
    return 0;
}
