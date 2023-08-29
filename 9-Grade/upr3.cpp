#include <iostream>
using namespace std;
int n;

void Sredno() {
    int a = 0;
    int sum = 0;
    while (n!=0) {
        sum += (n%10);
        n /= 10;
        a++;
    }
    cout << "Sredno: " << sum * 1.0 / a;
}

int main() {
    cout << "Enter an integer n (1<n<1000000): ";
    cin >> n;
    while(n <= 1 || n >= 1000000) {
        cout << "Invalid input (1<n<1000000). Please try again: ";
        cin >> n;
    }
    Sredno();
    return 0;
}
