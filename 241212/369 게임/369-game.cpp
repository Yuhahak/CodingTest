#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 1; i <= a ; i++){
        if(i % 3 == 0){
            cout << 0 << " ";
        }
        else{
            cout << i << " ";
        }
    }
    return 0;
}