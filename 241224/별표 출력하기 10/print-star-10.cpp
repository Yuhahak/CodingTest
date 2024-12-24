#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for(int i = 0 ; i < a * 2; i++){
        if(i % 2 == 0){
            for(int j = 0 ; j < 1 + (i / 2) ; j++){
                cout << "* ";
            }
        }
        else{
            for(int k = 0 ; k < a - (i - 1) / 2 ; k++){
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}