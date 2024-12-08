#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int d;
    cin >> a >> b >>c;
    if(a < b){
        d = a;
    }
    else{
        d = b;
    }
    if(d < c){
        d= d;
    }
    else{
        d = c;
    }

    if(a == d){
        cout << "1 ";
    }
    else{
        cout << "0 ";
    }

    if(a==a && a== b && a== c){
        cout << "1";
    }
    else{
        cout << "0";
    }
    return 0;
}