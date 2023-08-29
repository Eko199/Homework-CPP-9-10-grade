#include <iostream>
using namespace std;
void func(int x, int y, int *z) {
    int a = 100;
    int b = 150;
    x = *z + a;
    y = *z + x;
    *z = b;
    cout << "func: x = " << &z << endl;
    cout << "func: a = " << a << endl;
    cout << "func: b = " << b << endl;
    return;
}
int main() {
    int a = 70;
    int b = 70;
    func(b, a, &b);
    cout << "main: a = " << a << endl;
    cout << "main: b = " << b << endl;
    return 0;
}
