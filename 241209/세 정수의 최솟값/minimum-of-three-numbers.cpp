#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >>c;
    int d;
    if(a < b){
        d = a;
    }
    else {
        d = b;
    }

    if(d < c){
        d = d;
    }
    else{
        d = c;
    }
    cout << d;
    return 0;
}