#include <iostream>
using namespace std;

int main() {
    int a, b, cnt;
    cnt = 0;
    cin >> a >> b;
    if(a >= b){
        for(int i = b ; i<= a; i++){
            if(i % 5 == 0){
                cnt += i;
            }
        }
    }
    else {
        for(int i = a ; i<= b; i++){
            if(i % 5 == 0){
                cnt += i;
            }
        }
    }
    cout << cnt;
    return 0;
}