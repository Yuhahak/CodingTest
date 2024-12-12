#include <iostream>
using namespace std;

int main() {
    int a , b, sum;
    sum = 0;
    cin >> a;
    for(int i = 0 ; i < a; i++){
        cin >> b;
        if(b % 2 != 0 && b % 3 == 0){
            sum += b;
        }
    }
    cout << sum;
    return 0;
}