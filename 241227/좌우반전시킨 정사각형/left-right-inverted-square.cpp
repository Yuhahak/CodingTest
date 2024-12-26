#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 1 ; i <= a ; i++){
        for(int k = a ; k >= 1 ; k--){
            cout << i * k << " ";
        }
        cout << endl;
    }
    return 0;
}