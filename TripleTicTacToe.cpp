#include <iostream>
#include <cstdlib>
using namespace std;
char table[3][3][3][3], sym[3] = {'-', 'O', 'X'}, btable[3][3];

void result(char t[3][3][3][3]) {
    cout << "    1   2   3 \n";
    cout << "   123 123 123 \n";
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            if (j == 1) cout << i+1;
            else cout << " ";
            cout << " " << j+1;
            for (int k=0; k<3; k++) {
                for (int l=0; l<3; l++) cout << t[k][i][l][j];// << k << i << l << j;
                cout << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}

void proveri(int x, int y) {
    while(x < 1 || x > 3) {
        cout << "Invalid input for x (1 to 3). Please try again: ";
        cin >> x;
    }
    while(y < 1 || y > 3) {
        cout << "Invalid input for y (1 to 3). Please try again: ";
        cin >> y;
    }
}

void swin(int x, int y) {
    char won = sym[0];
    for (int i=0; i<3; i++) {
        if (won == sym[0]) {
            if (table[x][y][i][0] == table[x][y][i][1] && table[x][y][i][1] == table[x][y][i][2] && table[x][y][i][1] != sym[0]) won = table[x][y][i][0];
            else if (table[x][y][0][i] == table[x][y][1][i] && table[x][y][1][i] == table[x][y][2][i] && table[x][y][1][i] != sym[0]) won = table[x][y][0][i];
        }
    }
    if (won == sym[0] && table[x][y][1][1] != sym[0] && ((table[x][y][0][0] == table[x][y][1][1] && table[x][y][1][1] == table[x][y][2][2]) || (table[x][y][2][0] == table[x][y][1][1] && table[x][y][1][1] == table[x][y][0][2]))) won = table[x][y][1][1];
    if (won != sym[0]) {
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) table[x][y][i][j] = won;
        }
        btable[x][y] = won;
    }
}

int bwin() {
    char won = sym[0];
    for (int i=0; i<3; i++) {
        if (won == sym[0]) {
            if (btable[i][0] == btable[i][1] && btable[i][1] == btable[i][2] && btable[i][1] != sym[0]) won = btable[i][0];
            else if (btable[0][i] == btable[1][i] && btable[1][i] == btable[2][i] && btable[1][i] != sym[0]) won = btable[0][i];
        }
    }
    if (won == sym[0] && btable[1][1] != sym[0] && ((btable[0][0] == btable[1][1] && btable[1][1] == btable[2][2]) || (btable[2][0] == btable[1][1] && btable[1][1] == btable[0][2]))) won = btable[1][1];
    return won;
}

int main() {
    int pl = 1, x1 = -1, y1 = -1, x2, y2, w = 0, n = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            btable[i][j] = sym[0];
            for (int k=0; k<3; k++) {
                for (int l=0; l<3; l++) table[i][j][k][l] = sym[0];
            }
        }
    }
    result(table);
    while(w == 0) {
        int turns = 0;
        cout << "Player " << pl << "'s turn! \n";
        if (x1 == -1 || y1 == -1) {
            cout << "You can play everywhere! Type x and y from the big table: ";
            cin >> x1 >> y1;
            proveri(x1, y1);
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    if (table[x1-1][y1-1][i][j] != '-') n++;
                }
            }
            if (n == 9) {
                cout << "Big table " << x1 << " " << y1 << " is full. Please try again: ";
                cin >> x1 >> y1;
            }
            proveri(x1, y1);
            n = 0;
        }
        cout << "Type x and y from table " << x1 << " " << y1 << ": ";
        cin >> x2 >> y2;
        proveri(x2, y2);
        while(table[x1-1][y1-1][x2-1][y2-1] != '-') {
            cout << "This place is already taken. Please try again: ";
            cin >> x2 >> y2;
            proveri(x2, y2);
        }
        table[x1-1][y1-1][x2-1][y2-1] = sym[pl];
        swin(x1-1, y1-1);
        for (int i=0; i<3;i++) {
            if (bwin() == sym[i]) w = i;
        }
        turns++;
        if (turns == 81) break;
        system("CLS");
        result(table);
        if (pl == 1) pl++;
        else pl = 1;
        x1 = x2;
        y1 = y2;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (table[x1-1][y1-1][i][j] != '-') n++;
            }
        }
        if (n == 9) {
            x1 = -1;
            y1 = -1;
        }
        n = 0;
    }
    if (w != 0) cout << "Player " << w << " wins!";
    else cout << "Draw!";
    return 0;
}
