#include <iostream>
using namespace std;

int main() {
    int a, cnt = 9;
    cin >> a;
    for(int i = 1 ; i <= a ; i++){
        for(int k = 1 ; k<= a ; k++){
            cout << cnt;
            cnt --;
            if(cnt <= 0){
                cnt = 9;
            }
        }
        cout << endl;
    }
    return 0;
}