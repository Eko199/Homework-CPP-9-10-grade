#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
    Person(string first, string second, string last, string egn){
        this->firstName = first;
        this->secondName = second;
        this->lastName = last;
        this->EGN = egn;
    }
    string firstName;
    string secondName;
    string lastName;
    string EGN;
    string outp(){
        return firstName + " " + secondName + " " + lastName + " " + EGN + "\n";
    }
};

int main(){
    ofstream file("MyFile.txt", ios::app);
    for(int i = 0; i< 10; i++){
        string first;
        cin >> first;
        string second;
        cin >> second;
        string third;
        cin >> third;
        string egn;
        cin >> egn;
        Person person(first, second, third, egn);
        file << person.outp();
    }
    file.close();
}
