#include <iostream>
using namespace std;

int main() {
    int a ;
    cin >> a;
    if(a >= 100){
        cout << "vapor";
    }
    else if(a < 0){
        cout << "ice";
    }
    else{
        cout << "water";
    }
    return 0;
}