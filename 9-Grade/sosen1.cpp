#include <iostream>
#include <cstring>
using namespace std;

int countWords(char arr[]){
    int count = 1;
    bool endOfWord = false;
    for(int i = 0; i< strlen(arr); i++){
        if(endOfWord == true){
            if(arr[i] != '\0' && arr[i] != ' '){
                count ++;
            }
            endOfWord = false;
        }
        if(arr[i] == ' '){
            endOfWord = true;
        }
    }
    return count;

}

int main(){
    char arr[100];
    cin.getline(arr, 100);
    int count = countWords(arr);
    cout << count;
}
