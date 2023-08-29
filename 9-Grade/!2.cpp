#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream read("MyFile.txt");
    char info;
    read >> info;
    ofstream write("MyFile1.txt");
    while(read >> noskipws >> info){
        write << info;
    }
    read.close();
    write.close();

}
