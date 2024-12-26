#include <iostream>
using namespace std;

int main() {
    int a, cnt = 0;
    cin >> a;
    for(int i =1 ; i <= a ; i++){
        for(int k = 1 ; k <= a ; k++){
            cnt ++;
            if(cnt >= 10){
                cnt = 1;
            }
            cout << cnt;
        }
        cout << endl;
    }
    return 0;
}