#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Your name: " << name << endl;
    return 0;
}