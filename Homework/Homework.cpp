#include <iostream>
using namespace std;

int main() {
    int a, a1, a2, a3, a4, sum, mult;
    cout << "Please enter a 4-digit number: ";
    cin >> a;
    if (a < 1000 || a > 9999) {
        cout << "Invalid input. Please enter a 4-digit number: "
        cin >> a;
    }
    if (a / 1000 >= 1 && a / 10000 < 1) {
        a1 = a % 10;
        a2 = a / 10 % 10;
        a3 = a / 100 % 10;
        a4 = a / 1000;
        sum = a1 + a2 + a3 + a4;
        mult = a1 * a2 * a3 * a4;
        cout << "Sum is " << sum << ". Multiply is " << mult << ".";
    } else {
        cout << "Invalid input.";
    }
    return 0;
}
//Code blocks-a ми не иска да билдне кода и да го пусне, затова не можах да го тествам.
