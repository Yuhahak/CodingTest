#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    int b = 1;
    cin >> a;
    while(true){
        if(a == pow(2, b)){
            break;
        }
        b++;
    }
    cout << b;
    return 0;
}