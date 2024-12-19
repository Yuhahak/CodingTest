#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    b = a;
    for(int i =1 ; i <= b; i++){
        for(int j = a ; j > 0 ; j--){
            cout << "* ";
        }
        cout << endl;
        a --;
    }

    return 0;
}