#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a % 2 == 0){
        if(a == 2){
            cout << "28";
        }
        else{
            cout << "30";
        }
    }
    else{
        cout << "31";
    }
    return 0;
}