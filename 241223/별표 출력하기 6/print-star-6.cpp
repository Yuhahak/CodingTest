#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0 ; i < a; i++){
        for(int j = 0; j < i ; j++){
            cout << "  ";
        }
        for(int k = 1 ; k <= (2*a) - (2*i) -1 ; k++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 0; i < a-1 ; i++){
        for(int j = 0 ; j < a - i - 2 ; j ++){
            cout << "  ";
        }
        for(int k = 1 ; k <= 3+ (2 * i) ; k++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}