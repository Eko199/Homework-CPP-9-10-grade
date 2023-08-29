#include <iostream>
using namespace std;


int Prom(int x) {
    if (x==0) return 0;
    else if (x%10==4) return Prom(x/10)*10;
    else return Prom(x/10)*10+x%10;
}

int main() {
    int x;
    cin >> x;
    cout << Prom(x);
    return 0;
}
