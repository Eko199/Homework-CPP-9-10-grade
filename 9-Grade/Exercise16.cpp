#include <iostream>
using namespace std;

int main() {
    int a, b, c, min, max;
    cout << "Type a, b and c: \n";
    cin >> a >> b >> c;
    max = a;
    min = a;
    if (a!=0 || b!=0 || c!=0) {
        if (b > max) max = b;
        if (c > max) max = c;
        if (b < min) min = b;
        if (c < min) min = c;
        if (a%2 && b%2 && c%2) {
            cout << "Min is " << min << ".";
        } else if (!(a%2 || b%2 || c%2)) {
            cout << "Max is " << max << ".";
        } else {
            if (max%2) {
                if (a > max && !(a%2)) max = a;
                if (b > max && !(b%2)) max = b;
                if (c > max && !(c%2)) max = c;
            }
            if (!(min%2)) {
                if (a < min && a%2) min = a;
                if (b < min && b%2) min = b;
                if (c < min && c%2) min = c;
            }
            cout << "Max - min is " << max - min << ".";
        }
    }
    return 0;
}
