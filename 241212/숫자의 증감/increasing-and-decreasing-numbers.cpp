#include <iostream>
using namespace std;

int main() {
    char a;
    int b;
    cin >> a >> b;
    if(a =='A'){
        for(int i = 1; i <= b; i++){
            cout << i  << " ";
        }
    }
    else if(a == 'D'){
        for(int i = b ; i >= 1 ; i--){
            cout << i << " ";
        }
    }
    return 0;
}