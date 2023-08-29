#include <iostream>

using namespace std;

int countWords(char &arr[]){
    int count = 0;
    for(int i = 0; i< strlen(arr); i++){
        if(arr[i] == ' '){
            count ++;
        }
    }
    return count;

}

int main(){
    char arr[100];
    cin.getline(arr, 100);
    countWords(arr);



}
