#include <iostream>
using namespace std;

int main() {
    int a, b = 0;
    cin >> a;
    for( int i=1 ; i<=100 ; i++){
        b+= i;
        if( b >= a){
            cout << i;
            break;
        }
    }
    return 0;
}