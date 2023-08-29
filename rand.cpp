#include <iostream>
#include <cstdlib>
#include <windows.h>
int main() {
    int pos[168];
    for(int i = 0; i < 168; i++){
        pos[i] = 0;
    }
    while (true) {
        int newPos = rand()%168;
        if(pos[newPos] > 38){
            for(int i = 0; i < 168; i++){
                pos[i] = 0;
            }
            system("cls");
        }
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {newPos, pos[newPos]});
        pos[newPos]++;
        Sleep(5);
        std::cout << (char)(rand()%1200);
    }
}
