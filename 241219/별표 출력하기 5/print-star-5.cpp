#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    b = a;
    c = a;

for(int k = 1 ; k <= c ; k++){
    for(int j = 1 ; j <= b ; j++){
        for(int i = 1 ; i <= a ; i++){
            cout << "*";
        }
        cout << " ";
    }
    cout << endl;
    a--;
    b--;
}
    return 0;
}