#include <iostream>
using namespace std;

int main() {
    int a, cnt;
    cnt = 0;
    cin >> a;
    for(int i =1 ; i<= a;i++){
        if(i % 4 == 0){
            cnt++;
            if((i % 100 == 0) && (i % 400 != 0)){
                cnt--;
            }
        }
    }
    cout << cnt;
    return 0;
}