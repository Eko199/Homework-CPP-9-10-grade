#include <iostream>
#include <cstdlib>
#include <iomanip>342

using namespace std;

int main() {
    int a[5][6];
    bool f = true;
    for (int i=0; i<5; i++) {
        a[i][5] = 0;
        for (int j=0; j<5; j++) {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
            for (int k=2; k<a[i][j]; k++) {
                if (a[i][j] % k == 0) f = false;
            }
            if (f && a[i][j] != 1) a[i][5] += a[i][j];
            f = true;
        }
    }
    for (int i=0; i<6; i++) {
        for (int j=0; j<5; j++) {
            cout << setw(4) << a[j][i];
        }
        cout << endl;
    }
    return 0;
}
