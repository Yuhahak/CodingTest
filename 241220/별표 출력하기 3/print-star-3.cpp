#include <iostream>
using namespace std;

int main() {
    int a, b = 0, c = 0;
    cin >> a;
    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 0; j < b ; j++){
            cout << "  ";
        }
        for(int k = 1 ; k <= (2*a) - (2*c) - 1; k++){
            cout << "* ";
        }
        b++;
        c++;
        cout << endl;
    }
    return 0;
}