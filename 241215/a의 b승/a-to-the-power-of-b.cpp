#include <iostream>
using namespace std;

int main() {
    int a, b, c ;
    c = 1;
    cin >> a>> b;
    for(int i =a ; i <= b+1 ;i++){
        c *= a;
    }
    cout << c;
    return 0;
}