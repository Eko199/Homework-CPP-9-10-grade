#include <iostream>
#include <cstring>
using namespace std;

int countASCII(char arr[]){
    int count = 0;
    bool endOfWord = false;
    for(int i = 0; i< strlen(arr); i++){
        count += (int) arr[i];
    }
    return count;

}

int main(){
    char arr[100];
    cin.getline(arr, 100);
    int count = countASCII(arr);
    cout << count;
}
