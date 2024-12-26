#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i =0 ;i < a ; i++){
        for(int k = 1 ; k <= a ; k++){
            if(k % 2 != 0){
                cout << i + 1;
            }
            else{
                cout << a - i ;
            }
        }
        cout << endl;
    }
    return 0;
}