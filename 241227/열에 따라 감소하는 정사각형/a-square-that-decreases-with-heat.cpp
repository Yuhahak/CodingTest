#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = a ; i >= 1 ; i--){
        for(int k = a ; k >= 1 ; k--){
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}