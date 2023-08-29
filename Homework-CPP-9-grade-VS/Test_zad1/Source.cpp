#include <iostream>
using namespace std;

struct Products {
    int product_id;
    int number;
    char shifar[20];
    char product_name[20];
    char text[20];
    double price;
    int kolichestvo;
    double one_price;
};

void equal_price(double one_price, Products prod[], int size) {
    for (int i = 0; i < size; i++) {
        if (prod[i].one_price == one_price) {
            cout << "Product " << i << ": \n";
            cout << prod[i].product_id << endl;
            cout << prod[i].number << endl;
            cout << prod[i].shifar << endl;
            cout << prod[i].product_name << endl;
            cout << prod[i].text << endl;
            cout << prod[i].text << endl;
            cout << prod[i].kolichestvo << endl;
            cout << prod[i].one_price << endl;
        }
    }
}

int main() {
    Products prod[3];
    prod[0] = { 12, 10, "1a", "voda", "aa", 1.5, 1, 1.5 };
    prod[1] = { 12, 10, "1a", "voda1", "aa", 2.0, 2, 1.0 };
    prod[2] = { 12, 10, "1a", "voda2", "aa", 3.0, 2, 1.5 };
    equal_price(1.5, prod, 3);
}