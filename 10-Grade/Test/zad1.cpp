#include <iostream>
using namespace std;

int Fact(int x) {
    if (x <= 0) return 0;
    else if (x==1) return 1;
    else return x*Fact(x-1);
}

int main() {
    int n, m;
    cout << "Please enter n and m (n>0 and m>0):";
    cin >> n >> m;
    while (n <= 0) {
        cout << "Invalid input for n (n>0). Please try again:";
        cin >> n;
    }
    while (m <= 0) {
        cout << "Invalid input for m (m>0). Please try again:";
        cin >> m;
    }
    int a = (Fact(n)*Fact(m))/(Fact(1)+Fact(2));
    cout << "A=" << a;
    return 0;
}
