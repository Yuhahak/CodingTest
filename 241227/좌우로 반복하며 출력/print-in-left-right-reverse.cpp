#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =1 ; i <= a ;i++){
        if(i % 2 != 0){
            for(int k = 1 ; k <= a ; k++){
                cout << k;
            }
        }
        else{
            for(int j = a ; j >= 1 ; j --){
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}