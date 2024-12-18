#include <iostream>
using namespace std;

int main() {
    int a, cnt;
    cin >> a;
    cnt = 0;
    while(1){
        if(a == 1){
            break;
        }
        if(a % 2 == 0){
            a = a/2;
        }
        else if (a % 2 != 0){
            a = (a * 3) + 1;
        }
        cnt ++;
    }
    cout << cnt;
    return 0;
}