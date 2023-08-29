#include <iostream>
using namespace std;

void Vavedi(double arr[], int x, int i=0) {
    cin >> arr[i];
    if (i != x-1) Vavedi(arr, x, i+1);
}

void Izvedi(double arr[], int x, int i=0) {
    cout << arr[i] << " ";
    if (i != x-1) Izvedi(arr, x, i+1);
}

double Max(double arr[], int x, int i=0, double max = 0) {
    if (i == x) return max;
    if (i == 0) max = arr[0];
    if (max > arr[i]) return Max(arr, x, i+1, max);
    else return Max(arr, x, i+1, arr[i]);
}

double Min(double arr[], int x, int i=0, double min = 0) {
    if (i == x) return min;
    if (i == 0) min = arr[0];
    if (min < arr[i]) return Min(arr, x, i+1, min);
    else return Min(arr, x, i+1, arr[i]);
}

int main() {
    int x, y;
    cout << "Please enter the lengths of A and B (x > 0 and y>0):";
    cin >> x >> y;
    while (x <= 0) {
        cout << "Invalid input for the length of A (x>0). Please try again:";
        cin >> x;
    }
    while (y <= 0) {
        cout << "Invalid input for the length of B (y>0). Please try again:";
        cin >> y;
    }
    double a[x], b[y], razl, proizv;
    cout << "Please enter the elements of A:";
    Vavedi(a, x);
    cout << "Please enter the elements of B:";
    Vavedi(b, y);
    razl = Min(a, x) - Min(b, y);
    proizv = Max(a, x) * Max(b, y);
    cout << "Min A - min B = " << razl << "\nMax A * max B = " << proizv << endl;
    cout << "The elements of B are:";
    Izvedi(b, y);
    return 0;
}
