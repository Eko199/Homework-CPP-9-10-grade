#include <iostream>
#include <cstring>
using namespace std;

bool checkIfAscending(int arr[]){
    int lastElement = arr[0];
    for(int i = 1; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        if(arr[i] < lastElement){
            return false;
        }
        lastElement = arr[i];
    }
    return true;

}

int main(){
    int arr[]{5, 11, 10};
    cout << sizeof(arr) / sizeof(arr[0]);
    bool isAsceniding = checkIfAscending(arr);
    if(isAsceniding == false) cout << "false";
    else cout << "true";
}
