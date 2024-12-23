#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0 ; i < a ; i++){
        for(int j = 0 ; j < (a - i) - 1 ; j++){
            cout << "  ";
        }
        for(int k = 0 ; k < ( i + 1); k ++){
            cout << "@ ";
        }
        cout << endl;
    }
    for( int i = 0 ; i < a - 1; i++) {
        for(int j = 0 ; j < a - 1 - i; j++){
            cout << "@ ";
        }
        cout << endl;
    }
    return 0;
}