#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    for(int i = 0 ; i < a; i++){
        cin >> b;
        if( (b % 2 != 0) && (b % 3 == 0)){
            cout << b << endl;
        }
    }
    return 0;
}