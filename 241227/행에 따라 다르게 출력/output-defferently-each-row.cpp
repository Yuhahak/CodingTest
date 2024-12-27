#include <iostream>
using namespace std;

int main() {
    int a, cnt = 0;
    cin >> a;
    for(int i = 0 ; i < a ; i++){
        if(i % 2 == 0){
            for(int j = 0 ; j< a ; j++){
                cnt ++;
                cout << cnt << " ";
            }
        }
        else{
            for(int j = 0 ; j< a ; j++){
                cnt += 2;
                cout << cnt << " ";
            }
        }
        cout << endl;
    }
    return 0;
}