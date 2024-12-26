#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0 ; i < a ; i++){
        for(int k = 0 ; k< a ; k++){
            cout << (2 * i) + (2 * k) + 11 << " ";
        }
        cout << endl;
    }
    return 0;
}