#include <iostream>
using namespace std;

double Zad1(double a, double b, double c) {
    double max;
    if (a > b) max = a;
    else max = b;
    if (c > max) max = c;
    return max;
}

int Zad2(double a, double b) {
    // vrashta broi reshenia
    if (a == 0) {
        if (b == 0) {
            return 2; // bezbroi
        } else {
            return 0;
        }
    } else {
        return 1;
    }

}

bool Zad3(int n) {
    if (n == 1 || 0) return false;
    if (n == 2) return true;
    if (n < 0) n = -n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool Zad4(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    if (a < b+c && b < a+c && c < a+b) return true;
    return false;
}

int Zad5(int a, int b, int c) {
    if (a == b) {
        if (a == c) return 3;
        else return 2;
    }
    if (a == c || b == c) {
        return 2;
    }
    return 4;
}

bool Zad6(int n) {
    bool f = false;
    int p, q;
    for (int i = 0; i < n; i++) {
        cout << "Enter q: ";
        cin >> q;
        if (i != 0 && q == p) f = true;
        p = q;
    }
    return f;
}

int main() {
    int zad;
    cout << "Izberete zadacha (1, 2, 3, 4, 5 ili 6): ";
    cin >> zad;
    while (zad < 1 || zad > 6) {
        cout << "Invalid input. Please try again: ";
        cin >> zad;
    }
    switch (zad) {
        case 1: {
            double a, b, c;
            cout << "Enter 3 real numbers: ";
            cin >> a >> b >> c;
            cout << "Max is " << Zad1(a, b, c);
            break;
        }
        case 2: {
            double a, b;
            cout << "Enter a and b for ax+b=0: ";
            cin >> a >> b;
            int resh = Zad2(a, b);
            if (resh == 1) {
                cout << "X = " << -b/a;
            } else if (resh == 0) {
                cout << "There is no answer.";
            } else if (resh == 2) {
                cout << "Every x is an answer.";
            }
            break;
        }
        case 3: {
            int n;
            cout << "Enter an integer n: ";
            cin >> n;
            if (Zad3(n)) cout << "N is a prime number";
            else cout << "N isn't a prime number.";
            break;
        }
        case 4: {
            int a, b, c;
            cout << "Enter 3 integers: ";
            cin >> a >> b >> c;
            if (Zad4(a, b, c)) cout << "The integers can be the sides of a triangle.";
            else cout << "The integers can't be the sides of a triangle.";
            break;
        }
        case 5: {
            int a, b, c;
            cout << "Enter 3 positive integers: ";
            cin >> a >> b >> c;
            while (!Zad4(a, b, c)) {
                cout << "The integers can't be the sides of a triangle. Please try again: ";
                cin >> a >> b >> c;
            }
            int x = Zad5(a, b, c);
            switch (x) {
                case 2: cout << "The triangle is isosceles."; break; // ravnobedren
                case 3: cout << "The triangle is equilateral."; break; // ravnostranen
                case 4: cout << "The triangle is versatile."; break; // raznostranen
            }
            break;
        }
        case 6: {
            int n;
            cout << "Enter a positive integer n: ";
            cin >> n;
            while (n < 0) {
                cout << "Invalid input please try again: ";
                cin >> n;
            }
            if (Zad6(n)) cout << "Yes";
            else cout << "No";
        }

    }
    return 0;
}
