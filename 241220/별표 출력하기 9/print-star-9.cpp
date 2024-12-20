#include <iostream>
using namespace std;

int main() {
    int a, b = 0, c=0;
    cin >> a;
    for(int i = 1; i <= a ; i++){
        for(int j = 0; j < (a-c-1) ; j++){
            cout << "  ";
        }
        for(int k = 0; k < (2*b+1); k++){
            cout << "* ";
        }
        cout << endl;
        b++;
        c++;
    }
    return 0;
}