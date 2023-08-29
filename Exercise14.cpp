#include <iostream>
using namespace std;

int main() {
    int a, a1, a2, a3, a4, a5, num = 0, sum = 0;
    cout << "a=";
    cin >> a;
    if (a/10000 >= 1 && a/10000 < 10) {
        a1 = a%10;
        a2 = a/10%10;
        a3 = a/100%10;
        a4 = a/1000%10;
        a5 = a/10000;
        if (a1%2) {
            num++;
        } else {
            sum += a1;
        }
        if (a2%2) {
            num++;
        } else {
            sum +=a2;
        }
        if (a3%2) {
            num++;
        } else {
            sum += a3;
        }
        if (a4%2) {
            num++;
        } else {
            sum +=a4;
        }
        if (a5%2) {
            num++;
        } else {
            sum +=a5;
        }
        cout << "a)" << num << "\n";
        cout << "b)" << sum;
    } else {
        cout << "Invalid input.";
    }
    return 0;
}
