#include <iostream>
using namespace std;

int main() {
    int a ,b = 1;
    cin >> a;
    for(int i =1 ; i <= 10 ; i++){
        b *= i;
        if(a <= b){
            cout << i;
            break;
        }
    }
    return 0;
}