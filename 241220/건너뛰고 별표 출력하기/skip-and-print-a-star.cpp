#include <iostream>
using namespace std;

int main() {
    int a, b = 1, c;
    cin >> a;
    c = a;
    for(int i = 1 ; i <= a; i++){
        for(int j = 0; j < b ; j++ ){
            cout << "*";
        }
        cout << endl << endl;
        b++;
    }

    for(int i = 1 ; i < a; i++){
        for(int j = c - 1; j > 0 ; j --){
            cout << "*";
        }
        cout << endl << endl;
        c--;
    }
    return 0;
}