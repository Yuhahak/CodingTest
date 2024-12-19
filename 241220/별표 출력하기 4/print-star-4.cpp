#include <iostream>
using namespace std;

int main() {
    int a, b, c = 1;
    cin >> a;
    b = a;
    for(int i = 1 ; i <= a ; i++){
        for(int j = b; j>0 ; j--){
            cout << "* ";
        }
        cout << endl;
        b--;
    }
    for(int i = 1 ; i < a ; i++){
        for(int j = 0 ; j <= c; j++){
            cout << "* ";
        }
        cout << endl;
        c++;
    }
    return 0;
}