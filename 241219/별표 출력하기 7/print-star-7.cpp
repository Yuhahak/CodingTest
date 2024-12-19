#include <iostream>
using namespace std;

int main() {
    int a = 1,b;
    cin >> b;
    for(int i = 1 ; i <= b ;i++){
        for(int j = 1 ; j <= a ; j++){
            cout << "* ";
        }
        cout << endl;
        a++;
    }
    return 0;
}