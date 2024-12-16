#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b = a;
    for(int i = 1 ;i <=b ; i++){
        a= a/i;
        if(a <= 1){
            cout << i;
            break;
        }
    }
    return 0;
}