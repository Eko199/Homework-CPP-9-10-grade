#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Zadacha 1: a) ne \n";
    cout << "b) Math.abs raboti samo za floаt i double, taka che niama da raboti za tselochislen masiv, no mozhe da se izpolzwa drug nachin. \n\n";
    cout << "Zadacha 2: \n";
    cout << "Ako izhodat e tablica rows x cols: \n" <<
            " 2  0 12   0 0 \n" <<
            "-3  1 45  11 0 \n" <<
            " 7 13 18  22 0 \n" <<
            " 4 -8  4 100 0 \n";
    cout << "Ako izhodat e tablica razmer x razmer: \n" <<
            " 2  0 12    0 0 \n" <<
            "-3  1 45   11 0 \n" <<
            " 7 13 18   22 0 \n" <<
            " 4 -8  4  100 0 \n" <<
            " 5 19  4 -102 0 \n";
    int zad;
    cout << "Izberi zadacha (3 ili 4): ";
    cin >> zad;
    int red, col;
    cout << "Type red and col: ";
    cin >> red >> col;
    if (zad == 3) {
        int b[red][col];
        for (int i = 0; i < red; i++) {
            for (int j = 0; j < col; j++) {
                cout << "b[" << i << "][" << j << "]=";
                cin >> b[i][j];
            }
        }
        for (int i = 0; i < red; i++) {
            for (int j = 0; j < col; j++) {
                cout << setw(4) << b[i][j];
            }
            cout << endl;
        }
        bool f = false;
        int mult = 1;
        for (int i = 0; i < red; i++) {
            for (int j = 0; j < col; j++) {
                mult *= b[i][j];
                if (j != 0 && !f && b[i][j-1] == b[i][j]) f = true;
            }
            if (f) cout << "Red " << i << " ima 2 posledowatelni elementa i proizwedenieto na elementite na tozi red e " << mult << ". \n";
            f = false;
            mult = 1;
        }
    } else if (zad == 4) {
        int b[red][col+1];
        int sum = 0;
        for (int i = 0; i < red; i++) {
            for (int j = 0; j < col; j++) {
                cout << "b[" << i << "][" << j << "]=";
                cin >> b[i][j];
                if (b[i][j] > 0) sum += b[i][j];
            }
            b[i][col] = sum;
            sum = 0;
        }
        for (int i = 0; i < red; i++) {
            for (int j = 0; j < col+1; j++) {
                cout << setw(4) << b[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
