#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a[50][21];
    bool f = true;
    for (int i=0; i<50; i++) {
        a[i][20] = 0;
        for (int j=0; j<20; j++) {
            //cout << "a[" << i << "][" << j << "]=";
            //cin >> a[i][j];
            a[i][j] = rand() % 10;
            for (int k=2; k<a[i][j]; k++) {
                if (a[i][j] % k == 0) f = false;
            }
            if (f && a[i][j] != 1) a[i][20] += a[i][j];
            f = true;
        }
    }
    for (int i=0; i<21; i++) {
        for (int j=0; j<50; j++) {
            cout << a[j][i];
            if (i!=20) cout << "  ";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
