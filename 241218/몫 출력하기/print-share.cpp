#include <iostream>
using namespace std;

int main() {
    int a;
    int cnt = 0;
    while(true){
        cin >> a;
        if(cnt >= 3){
            break;
        }
        if(a % 2 == 0){
            cout << a / 2 << endl;
            cnt++;
        }
    }
    return 0;
}