#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int n, m;
    cout << "Enter n and m: ";
    cin >> n >> m;
    int a[n][m+1], min, sum = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
            if (j == 0 || a[i][m] < a[i][j]) {
                a[i][m] = a[i][j];
                sum += a[i][m];
                if (i == 0 || a[i][m] < min) min = a[i][m];
            }
        }
    }
    for (int i=0; i<m+1; i++) {
        for (int j=0; j<n; j++) {
            cout << setw(4) << a[j][i];
        }
        cout << endl;
    }
    cout << "Avg-min=" << sum / n - min;

    return 0;
}
