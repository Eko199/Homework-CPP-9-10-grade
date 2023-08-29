#include <iostream>
using namespace std;

struct CoffeeTea {
    char name[20];
    double price;
    double weight;
    char content;
    void Output() {
        cout << name << endl;
        cout << price << endl;
        cout << weight << endl;
        cout << content << endl << endl;
    }
};

void First(double price, CoffeeTea teas[], int size) {
    for (int i = 0; i < size; i++) {
        if (teas[i].price > price) {
            cout << "Coffe and tea " << i << ": \n";
            teas[i].Output();
        }
    }
}

void Second(char duma[], CoffeeTea teas[], int size) {
    for (int i = 0; i < size; i++) {
        if (teas[i].content == duma[0]) {
            cout << "Coffe and tea " << i << ": \n";
            teas[i].Output();
        }
    }
}

int main() {
    CoffeeTea teas[3];
    teas[0] = { "chai2", 1.5, 12.5, 'm' };
    teas[1] = { "kafe", 0.7, 1.9, 'm' };
    teas[2] = { "chai", 12.3, 100.7, 'p' };
    cout << "First part: \n\n";
    double price;
    cout << "Enter price: \n";
    cin >> price;
    First(price, teas, 3);
    cout << "Second part: \n\n";
    char duma[20];
    cout << "Enter word: \n";
    cin >> duma;
    Second(duma, teas, 3);
}