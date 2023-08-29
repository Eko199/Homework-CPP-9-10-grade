#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    cout << "Enter two integers:";
    cin >> a >> b;
    x = a;
    y = b;
    while(a != b) {
        if (a > b) a -= b;
        if (a < b) b -= a;
    }
    cout << "NOD = " << a << endl;
    cout << "NOK = " << x*y/a;
    return 0;
}
