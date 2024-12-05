#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = 80 - a;
    if(a >= 80){
        cout << "pass";
    }
    else{
        cout << b << " more score";
    }
    return 0;
}