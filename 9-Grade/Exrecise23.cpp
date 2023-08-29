#include <iostream>
using namespace std;

int main() {
    int arr[7];
    for (int i = 0; i < 7; i++) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
    cout << "1zad:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "arr[" << i << "]=";
        cout << arr[i] << endl;
    }
    cout << "2zad:" << endl;
    for (int i = 6; i >= 0; i--) {
        cout << "arr[" << i << "]=";
        cout << arr[i] << endl;
    }
    return 0;
}
