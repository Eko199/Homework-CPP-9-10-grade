#include <iostream>
using namespace std;

int main() {
    int a, a1, a2, a3, a4, a5, a6, a7, a8;
    double average;
    cout << "a=";
    cin >> a;
    if (a/10000000 >= 1 && a/10000000 < 10) {
        a1 = a%10;
        a2 = a/10%10;
        a3 = a/100%10;
        a4 = a/1000%10;
        a5 = a/10000%10;
        a6 = a/100000%10;
        a7 = a/1000000%10;
        a8 = a/10000000;
        double sum = a1+a2+a3+a4+a5+a6+a7+a8;
        average = sum/8;
        cout << "average=" << average;
    } else {
        cout << "Invalid input.";
    }
    return 0;
}
